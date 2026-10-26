#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char message[51]; 

    cout << "Enter a message (max 50 characters): ";
    cin.getline(message, 51);

    int length = 0;
    while (message[length] != '\0')
    {
        length = length + 1;
    }

    int upperCount = 0;
    int lowerCount = 0;
    int digitCount = 0;
    int spaceCount = 0;
    int specialCount = 0;
    int wordCount = 0;
    int inWord = 0;

    char shouted[51];
    char whispered[51];

    for (int i = 0; i < length; i++)
    {
        char c = message[i];

        if (c >= 'A' && c <= 'Z')
        {
            upperCount++;
        }
        else if (c >= 'a' && c <= 'z')
        {
            lowerCount++;
        }
        else if (c >= '0' && c <= '9')
        {
            digitCount++;
        }
        else if (c == ' ')
        {
            spaceCount++;
        }
        else
        {
            specialCount++;
        }

        if (c != ' ')
        {
            if (inWord == 0)
            {
                wordCount++;
                inWord = 1;
            }
        }
        else
        {
            inWord = 0;
        }

        shouted[i] = toupper(c);
        whispered[i] = tolower(c);
    }

    shouted[length] = '\0';
    whispered[length] = '\0';

    cout << endl;
    cout << "--- Message Report ---" << endl;
    cout << "Length (manual count): " << length << endl;
    cout << "Uppercase letters: " << upperCount << endl;
    cout << "Lowercase letters: " << lowerCount << endl;
    cout << "Digits: " << digitCount << endl;
    cout << "Spaces: " << spaceCount << endl;
    cout << "Special characters: " << specialCount << endl;
    cout << "Word count: " << wordCount << endl;
    cout << "SHOUTED: " << shouted << endl;
    cout << "whispered: " << whispered << endl;

    return 0;
}