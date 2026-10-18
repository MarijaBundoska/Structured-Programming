#include <iostream>
using namespace std;

int main() {
    int category, age;
    int price = 0;

    cin >> category >> age;

    switch (category) {
        case 1:
            price = 8;
            break;

        case 2:
            if (age < 12) {
                price = 8;
            } else {
                price = 12;
            }
            break;

        case 3:
            if (age < 12) {
                price = 10;
            } else {
                price = 15;
            }
            break;

        case 4:
            if (age < 17) {
                price = 15;
            } else {
                price = 18;
            }
            break;
    }

    cout <<	"Price: " << price<< "$" << endl;

    return 0;
}
