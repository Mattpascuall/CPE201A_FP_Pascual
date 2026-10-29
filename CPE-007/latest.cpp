#include <iostream>
#include <iomanip>
using namespace std;

// Function to calculate monthly transportation cost
double calculateMonthlyTransport(double dailyTransportCost, int travelDays)
{
    return dailyTransportCost * travelDays;
}

// Function to calculate monthly small purchases
double calculateMonthlySmallPurchases(double dailySmallPurchases)
{
    return dailySmallPurchases * 30;
}

// Function to calculate monthly groceries
double calculateMonthlyGroceries(double weeklyGroceries)
{
    return weeklyGroceries * 4;
}

// Function to calculate total monthly expenses
double calculateTotalExpenses(double fixedExpenses, double monthlyTransport,
                              double monthlySmallPurchases, double monthlyGroceries,
                              double monthlyEducationCost)
{
    return fixedExpenses + monthlyTransport + monthlySmallPurchases
           + monthlyGroceries + monthlyEducationCost;
}

int main()
{
    // Variables for the user's monthly budget information
    double monthlyIncome, fixedExpenses;
    double dailyTransportCost, dailySmallPurchases;
    double weeklyGroceries, yearlyEducationCost;
    double monthlyEducationCost;
    double monthlyTransport, monthlySmallPurchases, monthlyGroceries;
    double totalExpenses;
    int travelDays, numberOfDependents;

    // Ask the user to enter their budget information
    cout << "Enter number of dependents: ";
    cin >> numberOfDependents;

    cout << "Enter monthly income: ";
    cin >> monthlyIncome;

    cout << "Enter fixed expenses: ";
    cin >> fixedExpenses;

    cout << "Enter daily transportation cost: ";
    cin >> dailyTransportCost;

    cout << "Enter number of travel days per month: ";
    cin >> travelDays;

    cout << "Enter daily small purchases: ";
    cin >> dailySmallPurchases;

    cout << "Enter weekly groceries cost: ";
    cin >> weeklyGroceries;

    cout << "Enter yearly education cost: ";
    cin >> yearlyEducationCost;

    // Reject incomplete or invalid budget data before doing calculations.
    if (!cin)
    {
        cerr << "Error: Please enter valid numeric values." << endl;
        return 1;
    }

    if (monthlyIncome < 0 || fixedExpenses < 0 || dailyTransportCost < 0 ||
        travelDays < 0 || travelDays > 31 || dailySmallPurchases < 0 ||
        weeklyGroceries < 0 || numberOfDependents < 0 ||
        yearlyEducationCost < 0)
    {
        cerr << "Error: Costs and dependents cannot be negative, and travel days must be between 0 and 31." << endl;
        return 1;
    }

    // Convert daily and weekly expenses into monthly expenses
    monthlyTransport = calculateMonthlyTransport(dailyTransportCost, travelDays);

    monthlySmallPurchases =
        calculateMonthlySmallPurchases(dailySmallPurchases);

    monthlyGroceries = calculateMonthlyGroceries(weeklyGroceries);
    monthlyEducationCost = yearlyEducationCost / 12;

    // Calculate the total of all monthly expenses
    totalExpenses = calculateTotalExpenses(
        fixedExpenses,
        monthlyTransport,
        monthlySmallPurchases,
        monthlyGroceries,
        monthlyEducationCost
    );

    // Display the monthly budget summary
    cout << endl;
    cout << "Number of Dependents: " << numberOfDependents << endl;
    cout << fixed << setprecision(2);
    cout << "Monthly Income: " << monthlyIncome << endl;
    cout << "Total Monthly Expenses: " << totalExpenses << endl;
    cout << "Remaining Balance: " << monthlyIncome - totalExpenses << endl;
  

    return 0;
}