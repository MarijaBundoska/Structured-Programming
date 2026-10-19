#include <iostream>
using namespace std;

bool isInteresting(int number) {
    int reversedNumber = 0, digitCount = 0;
    int temp = number;

    while (temp > 0) {
        int digit = temp % 10;
        reversedNumber = reversedNumber * 10 + digit;
        digitCount++;
        temp /= 10;
    }

    return (reversedNumber % digitCount == 0);
}

int main() {
    int number, i;
    cin >> number;

    if (number <= 9) {
        cout << "Brojot ne e validen";
        return 0;
    }

    for (i = number - 1; i >= 9; --i) {
        if (isInteresting(i)) {
            cout << i;
            return 0;
        }
    }

    return 0;
}
