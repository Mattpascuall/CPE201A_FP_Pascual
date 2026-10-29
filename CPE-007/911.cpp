#include <iostream>
#include <cstring>
#include <string>
#include <cctype>
using namespace std;

int main() {
// Testing is lower

char ch; //This is a character Constant
cout << "Enter four(4) character: \n";
cout << "Testing islower()\n";
for (int i=0;i<4;i++){
    cout << "Enter a character: ";
    cin >> ch;

    if(islower(ch)){
        cout << ch << " is a lowercase letter\n";
    } else {
        cout << ch << " is not a lowercase letter\n";
    }
}

cout << "Testing isupper()\n";
for (int i=0;i<4;i++){
    cout << "Enter a character: ";
    cin >> ch;

    if(isupper(ch)){
        cout << ch << " is a uppercase letter\n";
    } else {
        cout << ch << " is not a uppercase letter\n";
    }
}

cout << "Conversion\n";
for (int i=0;i<4;i++){
    cout << "Enter a character: ";
    cin >> ch;

    if(islower(ch)){
        cout << ch << " converted to uppercase: " << (char)toupper(ch) << endl;
    }else if (isupper(ch)){
        cout << ch << " converted to lowercase: " << (char)tolower(ch) << endl;
    } else {
        cout << ch << " is not convertible. " << endl;
    }
}
return 0;
}