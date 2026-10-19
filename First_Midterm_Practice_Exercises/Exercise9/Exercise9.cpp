
#include <iostream>
using namespace std;

int main() {
    char digit;
    int sum = 0;

    while (cin >> digit && digit != '.') {
        if (digit >= '0' && digit <= '9') {
            sum += digit - '0';
        } else if (digit >= 'A' && digit <= 'F') {
            sum += digit - 'A' + 10;
        } else if (digit >= 'a' && digit <= 'f') {
            sum += digit - 'a' + 10;
        }
    }

    if (sum % 16 == 0) {
        if (sum % 100 == 16) {
            cout << "Poln pogodok";
        } else {
            cout << "Pogodok";
        }
    } else {
        cout << sum;
    }

    return 0;
}
