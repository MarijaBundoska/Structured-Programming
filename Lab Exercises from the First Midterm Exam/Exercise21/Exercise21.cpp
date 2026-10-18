#include <iostream>
using namespace std;

int main() {
    int apples, raspberries, bananas, card;
    cin >> apples >> raspberries >> bananas >> card;

    double applesPrice = apples * 30.0 / 100;
    double raspberriesPrice = raspberries * 50.0 / 100;
    double bananasPrice = bananas * 40.0 / 100;

    if (apples >= 500) {
        applesPrice *= 0.5;
    }
    else if (apples == 200) {
        applesPrice *= 0.7;
    }

    if (raspberries >= 500) {
        raspberriesPrice *= 0.5;
    }
    else if (raspberries == 200) {
        raspberriesPrice *= 0.7;
    }

    if (bananas >= 500) {
        bananasPrice *= 0.5;
    }
    else if (bananas == 200) {
        bananasPrice *= 0.7;
    }

    double total = applesPrice + raspberriesPrice + bananasPrice;

    if (card == 1) {
        total -= 140;
    }

    if (total < 0) {
        total = 0;
    }

    cout << total;

    return 0;
}
