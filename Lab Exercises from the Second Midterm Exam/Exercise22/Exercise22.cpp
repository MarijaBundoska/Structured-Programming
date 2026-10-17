#include <iostream>
using namespace std;

int increasing(int number) {
    if (number == 0 || number < 10) {
        return 1;
    }

    if (number % 10 > (number / 10) % 10) {
        return increasing(number / 10);
    } else {
        return -1;
    }
}

int sumDigits(int number) {
    int sum = 0;
    if (number == 0) {
        return sum;
    }
    else {
        sum += number % 10;
        return sum + sumDigits(number / 10);
    }
}

int main() {
    int n, number;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> number;

        if (increasing(number) == 1) {
            int sum = sumDigits(number);
            cout << number << " (sum: " << sum << ")" << endl;
        }
    }

    return 0;
}
