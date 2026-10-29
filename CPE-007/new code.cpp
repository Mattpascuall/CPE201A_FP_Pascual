#include <iostream>
using namespace std;

int main() {
    int accnum;
    float Beginningbal, charges, credits, credlimit, newbal;

    cout << "Enter Account Number: ";
    cin >> accnum;

    cout << "Enter Beginning Balance: ";
    cin >> Beginningbal;

    cout << "Enter Total Charges This Month: ";
    cin >> charges;

    cout << "Enter Total Credits This Month: ";
    cin >> credits;

    cout << "Enter Allowed Credit Limit: ";
    cin >> credlimit;

    newbal = Beginningbal + charges - credits;

    cout << "New Balance: " << newbal << endl;

    if (newbal > credlimit) {
        cout << "Credit limit exceeded!" << endl;
        cout << "Account Number: " << accnum << endl;
        cout << "Credit Limit: " << credlimit << endl;
        cout << "New Balance: " << newbal << endl;
    } else {
        cout << "Credit limit not exceeded." << endl;
    }

    return 0;
}