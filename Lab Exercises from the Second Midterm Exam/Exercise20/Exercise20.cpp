#include <iostream>
using namespace std;

bool palindrome(int n) {
    if (n < 10) {
        return true;
    }

    int digits = 1;
    int lastDigit = n % 10;
    int temp = n / 10;

    while (temp > 0) {
        digits *= 10;
        temp /= 10;
    }

    if (n / digits != lastDigit) {
        return false;
    }
    else {
        return palindrome((n % digits) / 10);
    }
}

int countDigits(int n) {
    if (n == 0) {
        return 0;
    }
    else {
        return 1 + countDigits(n / 10);
    }
}

int sumDigits(int a) {
    int sum = 0;

    if (a == 0) {
        return sum;
    }
    else {
        sum = a % 10;
        return sum += sumDigits(a / 10);
    }
}

int main() {
    int a;

    while (cin >> a) {
        if (palindrome(a)) {
            cout << sumDigits(a) << endl;
        }
        else {
            cout << countDigits(a) << endl;
        }
    }

    return 0;
}
