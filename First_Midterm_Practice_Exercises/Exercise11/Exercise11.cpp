
#include <iostream>
using namespace std;

bool isZigzag(int number) {
    int previousDigit = number % 10;
    number /= 10;

    while (number > 0) {
        int digit = number % 10;

        if ((digit < 5 && previousDigit < 5) ||
            (digit >= 5 && previousDigit >= 5)) {
            return false;
        }

        previousDigit = digit;
        number /= 10;
    }

    return true;
}

int main() {
    int number;

    while (cin >> number) {
        if (number >= 10 && isZigzag(number)) {
            cout << number << endl;
        }
    }

    return 0;
}
