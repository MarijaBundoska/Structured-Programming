#include <iostream>
using namespace std;

int main() {
    int day, month, year;
    cin >> day >> month >> year;

    if (month < 1 || month > 12) {
        cout << 0;
        return 0;
    }

    int daysInMonth;

    if (month == 2) {
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
            daysInMonth = 29;
        } else {
            daysInMonth = 28;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        daysInMonth = 30;
    } else {
        daysInMonth = 31;
    }

    if (day >= 1 && day <= daysInMonth) {
        cout << 1;
    } else {
        cout << 0;
    }

    return 0;
}
