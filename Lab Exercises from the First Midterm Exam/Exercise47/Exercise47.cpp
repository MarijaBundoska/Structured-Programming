#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int number;
    int maximum = -1;

    for (int i = 0; i < n; i++) {
        cin >> number;

        int firstDigit = number / 100;
        int secondDigit = (number / 10) % 10;
        int thirdDigit = number % 10;

        int sum = firstDigit + secondDigit + thirdDigit;

        if (sum % 2 == 0) {
            if (number > maximum) {
                maximum = number;
            }
        }
    }

    if (maximum != -1) {
        cout << maximum << endl;
    }

    return 0;
}
