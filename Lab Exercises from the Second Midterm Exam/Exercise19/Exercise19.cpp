#include <iostream>
using namespace std;

int largestDigit(int number) {
    if (number < 10) {
        if (number % 2 == 0) {
            return 0;
        }
        else {
            return number;
        }
    }
    else {
        int digit = number % 10;
        if (digit % 2 == 0) {
            return largestDigit(number / 10);
        }
        else {
            if (digit < largestDigit(number / 10)) {
                return largestDigit(number / 10);
            }
            else {
                return digit;
            }
        }
    }
}

int main() {
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        cout << i << " -> " << largestDigit(i) << endl;
    }

    return 0;
}
