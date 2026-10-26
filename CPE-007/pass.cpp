#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {

    string password;

    bool uppercase = false;
    bool lowercase = false;
    bool digit = false;
    bool punctuation = false;
    bool whitespace = false;

    cout << "Enter password: ";
    cin >> password;

    for (int i = 0; i < password.length(); i++) {

        if (isupper(password[i]))
            uppercase = true;

        if (islower(password[i]))
            lowercase = true;

        if (isdigit(password[i]))
            digit = true;

        if (ispunct(password[i]))
            punctuation = true;

        if (isspace(password[i]))
            whitespace = true;
    }

    cout << endl;

    if (uppercase)
        cout << "Contains uppercase letter: Satisfied" << endl;
    else
        cout << "Contains uppercase letter: Not satisfied" << endl;

    if (lowercase)
        cout << "Contains lowercase letter: Satisfied" << endl;
    else
        cout << "Contains lowercase letter: Not satisfied" << endl;

    if (digit)
        cout << "Contains digit: Satisfied" << endl;
    else
        cout << "Contains digit: Not satisfied" << endl;

    if (punctuation)
        cout << "Contains punctuation: Satisfied" << endl;
    else
        cout << "Contains punctuation: Not satisfied" << endl;

    if (!whitespace)
        cout << "Contains no whitespace: Satisfied" << endl;
    else
        cout << "Contains no whitespace: Not satisfied" << endl;

    if (password.length() >= 8)
        cout << "At least 8 characters: Satisfied" << endl;
    else
        cout << "At least 8 characters: Not satisfied" << endl;

    if (uppercase && lowercase && digit && punctuation &&
        !whitespace && password.length() >= 8)
        cout << "Password is VALID" << endl;
    else
        cout << "Password is INVALID" << endl;

    return 0;
}