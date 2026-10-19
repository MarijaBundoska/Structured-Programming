
#include <iostream>
using namespace std;

bool isZigzag(int number) {
    int previousDigit = number % 10;
    number /= 10;

    bool previousComparison = false;
    bool firstComparison = true;

    while (number > 0) {
        int digit = number % 10;

        if (digit == previousDigit) {
            return false;
        }

        bool currentComparison = (digit > previousDigit);

        if (!firstComparison && currentComparison == previousComparison) {
            return false;
        }

        previousComparison = currentComparison;
        firstComparison = false;

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
