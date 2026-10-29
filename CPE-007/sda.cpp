#include <iostream>
#include <cctype>
using namespace std;

int main() {

    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (isalpha(ch))
        cout << "isalpha: Yes" << endl;
    else
        cout << "isalpha: No" << endl;

    if (isdigit(ch))
        cout << "isdigit: Yes" << endl;
    else
        cout << "isdigit: No" << endl;

    if (isalnum(ch))
        cout << "isalnum: Yes" << endl;
    else
        cout << "isalnum: No" << endl;

    if (islower(ch))
        cout << "islower: Yes" << endl;
    else
        cout << "islower: No" << endl;

    if (isupper(ch))
        cout << "isupper: Yes" << endl;
    else
        cout << "isupper: No" << endl;

    if (isspace(ch))
        cout << "isspace: Yes" << endl;
    else
        cout << "isspace: No" << endl;

    if (ispunct(ch))
        cout << "ispunct: Yes" << endl;
    else
        cout << "ispunct: No" << endl;

    if (isxdigit(ch))
        cout << "isxdigit: Yes" << endl;
    else
        cout << "isxdigit: No" << endl;

    cout << "toupper: " << (char)toupper(ch) << endl;
    cout << "tolower: " << (char)tolower(ch) << endl;

    return 0;
}