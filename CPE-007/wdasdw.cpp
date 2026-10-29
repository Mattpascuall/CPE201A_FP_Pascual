#include <iostream>
using namespace std;

int main() {
    int choice;
    float r, l, w, b, h, s, area;
    char again;

    do {
        cout << "AREA CALCULATOR" << endl;
        cout << "1. Area of Circle" << endl;
        cout << "2. Area of Rectangle" << endl;
        cout << "3. Area of Triangle" << endl;
        cout << "4. Area of Square" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            cout << "Enter radius: ";
            cin >> r;
            area = 3.1416 * r * r;
            cout << "Area = " << area << endl;
            break;

        case 2:
            cout << "Enter length: ";
            cin >> l;
            cout << "Enter width: ";
            cin >> w;
            area = l * w;
            cout << "Area = " << area << endl;
            break;

        case 3:
            cout << "Enter base: ";
            cin >> b;
            cout << "Enter height: ";
            cin >> h;
            area = (b * h) / 2;
            cout << "Area = " << area << endl;
            break;

        case 4:
            cout << "Enter side: ";
            cin >> s;
            area = s * s;
            cout << "Area = " << area << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }

        cout << "Compute another? (Y/N): " << endl;
        cin >> again;

    } while(again == 'Y' || again == 'y');

    return 0;
}