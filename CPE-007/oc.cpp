#include <iostream>
using namespace std;

int main () {
    int nums[5] = {12, 5, 8, 21, 9};
    int count = 0;

    for (int i = 0; i < 5; i++) {
        if (nums[i] % 2 == 0) {
        count++;
        }
    }
    cout << "Even numbers: " << count;
    return 0;
}
