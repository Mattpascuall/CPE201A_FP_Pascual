#include <iostream>
#include <string>
using namespace std;

int main() {

    string num1, num2, num3, num4;

    cout << "Enter first integer: ";
    cin >> num1;

    cout << "Enter second integer: ";
    cin >> num2;

    cout << "Enter third integer: ";
    cin >> num3;

    cout << "Enter fourth integer: ";
    cin >> num4;

    int n1 = stoi(num1);
    int n2 = stoi(num2);
    int n3 = stoi(num3);
    int n4 = stoi(num4);

    int total = n1 + n2 + n3 + n4;

    cout << "Total: " << total << endl;

    return 0;
}