#include <iostream>
using namespace std;

int main() {
    char again;
    do {
        int choose;
        cout << "Celsius to Fahrenheit - (1)" << endl;
        cout << "Fahrenheit to Celsius - (2)" << endl;
        cout << "Please choose the number: ";
        cin >> choose;

        switch (choose) {
            case 1: {
                double celsius;
                double convert;
                cout << "Please input Celsius to convert to Fahrenheit: ";
                cin >> celsius;
                convert = (celsius * 9/5) + 32;
                cout << "The Fahrenheit is: " << convert << " F" << endl;
                break;
            }

            case 2: {
                double fahrenheit;
                double conv;
                cout << "Please input Fahrenheit to convert to Celsius: ";
                cin >> fahrenheit;
                conv = (fahrenheit - 32) * 5/9;
                cout << "The Celsius is: " << conv << " C" << endl;
                break;
            }
            default:
                cout << "The number is not valid." << endl;
        }

        cout << "Do you want to try again? Press Y for yes, N for no: ";
        cin >> again;

    } while (again == 'Y' || again == 'y');
        cout << "The program will now stop." << endl;

    return 0;
}