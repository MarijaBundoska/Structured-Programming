#include <iostream>
using namespace std;

int main() {
    int a, temp;
    cin >> a;

    temp = a;

    while (temp >= 10) {
        if (temp % 10 <= (temp / 10) % 10) {
            cout << "0";
            return 0;
        }
        temp /= 10;
    }

    cout << "1";

    return 0;
}
