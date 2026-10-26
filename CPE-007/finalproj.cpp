
#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QFormLayout>
#include <QDoubleSpinBox>
#include <QPushButton>
#include <QLabel>
#include <QMessageBox>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QWidget window;
    window.setWindowTitle("Simple Budget Calculator");
    window.resize(400, 500);

    QVBoxLayout layout(&window);
    QLabel title("Monthly Budget Calculator");
    title.setStyleSheet("font-size: 20px; font-weight: bold;");
    layout.addWidget(&title);

    QFormLayout form;
    layout.addLayout(&form);

    // Monthly budget
    QDoubleSpinBox budget;
    budget.setRange(0, 100000000);
    budget.setPrefix("PHP ");
    budget.setValue(20000);
    form.addRow("Monthly budget:", &budget);

    // Expense categories
    QString categories[] = {
        "Rent / Mortgage", "Electricity", "Water",
        "Car Payments", "Credit Card", "Groceries",
        "Internet", "Transportation", "Insurance",
        "Other Expenses"
    };

    QDoubleSpinBox *expenses[10];

    for (int i = 0; i < 10; i++) {
        expenses[i] = new QDoubleSpinBox(&window);
        expenses[i]->setRange(0, 100000000);
        expenses[i]->setPrefix("PHP ");
        form.addRow(categories[i] + ":", expenses[i]);
    }

    // Result and buttons
    QLabel result("Enter your expenses, then click Calculate.");
    result.setWordWrap(true);
    layout.addWidget(&result);

    QPushButton calculate("Calculate Budget");
    QPushButton reset("Reset Expenses");

    layout.addWidget(&calculate);
    layout.addWidget(&reset);

    // Calculate total expenses
    QObject::connect(&calculate, &QPushButton::clicked, [&]() {
        double total = 0;

        for (auto input : expenses)
            total += input->value();

        double remaining = budget.value() - total;

        QString summary = QString("Total expenses: PHP %1\n")
                              .arg(total, 0, 'f', 2);

        if (remaining < 0) {
            summary += QString("Over budget: PHP %1")
                           .arg(-remaining, 0, 'f', 2);

            result.setStyleSheet("color: red; font-weight: bold;");

            QMessageBox::warning(&window, "Budget Warning",
                    "You have exceeded your spending limit!");
        }
        else {
            summary += QString("Remaining budget: PHP %1")
                           .arg(remaining, 0, 'f', 2);

            result.setStyleSheet("color: green; font-weight: bold;");
        }

        result.setText(summary);
    });

    // Reset expenses
    QObject::connect(&reset, &QPushButton::clicked, [&]() {
        for (auto input : expenses)
            input->setValue(0);

        result.setText("Enter your expenses, then click Calculate.");
        result.setStyleSheet("");
    });

    window.show();
    return app.exec();
}
