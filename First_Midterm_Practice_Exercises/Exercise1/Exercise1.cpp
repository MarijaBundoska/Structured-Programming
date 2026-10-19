#include <iostream>
using namespace std;

int main() {
    int m, n, i, digit, temp, smallestNumber;
    cin >> m >> n;

    smallestNumber = 0;

    for (i = m; i <= n; i++) {
        temp = i;
        bool even = true;

        while (temp > 0) {
            digit = temp % 10;

            if (digit % 2 != 0) {
                even = false;
                break;
            }

            temp /= 10;
        }

        if (even) {
            smallestNumber = i;
            break;
        }
    }

    if (smallestNumber != 0) {
        cout << smallestNumber;
    } else {
        cout << "NE";
    }

    return 0;
}
