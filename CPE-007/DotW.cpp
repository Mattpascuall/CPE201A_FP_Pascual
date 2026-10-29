#include <iostream>
using namespace std;

int main() {
    string days[7] = {
        "Sunday",
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday"
    };
    int day;

    cout << "Enter a number: " << endl;
    cin >> day;

    if (day >= 0 && day < 7) {
        cout << days[day] << endl;
    } else {
        cout << "Error, no such day." << endl;
    }

    return 0;
}