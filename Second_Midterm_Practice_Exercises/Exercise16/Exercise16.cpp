#include <iostream>
using namespace std;

int maxDigit(int n) {
    if (n < 10)
        return n;

    int digit = n % 10;
    int maxDigitOfRest = maxDigit(n / 10);

    if (digit > maxDigitOfRest)
        return digit;
    else
        return maxDigitOfRest;
}

int main() {
    int n;

    while (cin >> n) {
        cout << maxDigit(n) << endl;
    }

    return 0;
}
