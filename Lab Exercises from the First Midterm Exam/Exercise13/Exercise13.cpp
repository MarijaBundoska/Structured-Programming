#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;

    int firstDigit = number / 10000;
    int lastDigit = number % 10;
    int sum = firstDigit + lastDigit;
    int sharpenedNumber = number % 10000 / 10;

    cout << sharpenedNumber << endl;
    cout << sum << endl;

    return 0;
}
