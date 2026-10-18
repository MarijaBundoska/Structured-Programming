#include <iostream>
#include <string>
using namespace std;

int main() {
    string phone1, phone2;
    int minutes;
    double price;

    cin >> phone1 >> phone2 >> minutes;

    if (minutes <= 30) {
        price = minutes * 3;
    } else {
        price = 30 * 3 + (minutes - 30) * 2;
    }

    int operator1 = 0;
    int operator2 = 0;

    if (phone1.substr(0, 3) == "071" ||
        phone1.substr(0, 3) == "072" ||
        phone1.substr(0, 3) == "073") {
        operator1 = 1;
    } else if (phone1.substr(0, 3) == "074" ||
               phone1.substr(0, 3) == "075" ||
               phone1.substr(0, 3) == "076") {
        operator1 = 2;
    }

    if (phone2.substr(0, 3) == "071" ||
        phone2.substr(0, 3) == "072" ||
        phone2.substr(0, 3) == "073") {
        operator2 = 1;
    } else if (phone2.substr(0, 3) == "074" ||
               phone2.substr(0, 3) == "075" ||
               phone2.substr(0, 3) == "076") {
        operator2 = 2;
    }

    if (operator1 == operator2 && operator1 != 0) {
        price = price * 0.70;
    }

    cout << price << endl;

    return 0;
}
