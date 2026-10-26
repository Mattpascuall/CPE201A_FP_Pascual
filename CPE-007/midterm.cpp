#include<iostream>
#include<string>
#include<cctype>
#include<cstring>
using namespace std;

int main() {
    string password;
    int N;
    int uppercase = 0;
    int lowercase = 0;
    int digits = 0;
    int punct = 0;
    int counter = 0;
    int strongCount = 0;
    string longest = "";
    int longestLen = 0;

    cout << "input N: " << endl;
    cin >> N;

    for (int i = 0; i < N; i++){
        cout << "enter password: " << endl;
        cin >> password;
        counter++;

        uppercase = 0;
        lowercase = 0;
        digits = 0;
        punct = 0;

        for (int j = 0; j < (int)password.length(); j++) {
            if (password[j] >= 'A' && password[j] <= 'Z')
                uppercase++;
            else if (password[j] >= 'a' && password[j] <= 'z')
                lowercase++;
            else if (password[j] >= '0' && password[j] <= '9')
                digits++;
            else
                punct++;
        }

        cout << "Password " << counter << " (" << password << "): Length=" <<
             password.length() << ", Upper=" << uppercase << ", Lower="
             << lowercase << ", Digits=" << digits << ", Other=" << punct; 

        if ((int)password.length() >= 8 && uppercase > 0 && lowercase > 0 && digits > 0){
            cout << " -> STRONG" << endl;
            strongCount++;
            if ((int)password.length() > longestLen){
                longestLen = password.length();
                longest = password;
            }
        } else {
            cout << " -> WEAK" << endl;
        }
    }

    cout << "Total Strong Passwords: " << strongCount << endl;

    if (strongCount > 0){
        cout << "Longest Strong Password: " << longest
             << " (Length " << longestLen << ")" << endl;
    } else {
        cout << "No strong passwords found." << endl;
    }

    return 0;
}