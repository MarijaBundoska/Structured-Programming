#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    int temp = a;
    int evenSum = 0, oddSum = 0;

    while (a > 0) {
        evenSum += a % 10;
        a /= 100;
    }

    while (temp > 0) {
        oddSum += temp % 100 / 10;
        temp /= 100;
    }

    cout << "The sum of digits at even positions is " << evenSum << endl;
    cout << "The sum of digits at odd positions is " << oddSum << endl;

    return 0;
}
