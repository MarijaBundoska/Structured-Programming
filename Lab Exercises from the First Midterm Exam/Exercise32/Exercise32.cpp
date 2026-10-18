#include <iostream>
using namespace std;

int main() {
    double percent0, threshold1, percent1, threshold2, percent2;
    double income, tax;

    cin >> percent0 >> threshold1 >> percent1 >> threshold2 >> percent2;
    cin >> income;

    if (income <= threshold1) {
        tax = income * percent0 / 100;
    } else if (income <= threshold2) {
        tax = threshold1 * percent0 / 100
            + (income - threshold1) * percent1 / 100;
    } else {
        tax = threshold1 * percent0 / 100
            + (threshold2 - threshold1) * percent1 / 100
            + (income - threshold2) * percent2 / 100;
    }

    cout << tax << endl;

    return 0;
}
