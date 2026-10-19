
#include <iostream>
using namespace std;

int main() {
    int number;
    int previousMax = 0;
    bool first = true;

    while (cin >> number) {
        int temp = number;
        int sum = 0;
        int maxDigit = 0;

        while (temp > 0) {
            int digit = temp % 10;

            sum += digit;

            if (digit > maxDigit) {
                maxDigit = digit;
            }

            temp /= 10;
        }

        if (!first) {
            sum += previousMax;
        }

        cout << number << ": " << sum << endl;

        previousMax = maxDigit;
        first = false;
    }

    return 0;
}
