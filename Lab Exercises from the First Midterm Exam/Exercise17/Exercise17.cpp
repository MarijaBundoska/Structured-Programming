#include <iostream>
using namespace std;

int main() {
    int a, b, suma = 0, sumb = 0, temp, temp2;
    cin >> a >> b;

    temp = a % 10;
    while (a > 0) {
        suma += temp;
        a /= 10;
        temp = a % 10;
    }

    temp2 = b % 10;
    while (b > 0) {
        sumb += temp2;
        b /= 10;
        temp2 = b %10;
    }

    if (suma > sumb) {
        cout << "1";
    } else {
        cout << "0";
    }

    return 0;
}
