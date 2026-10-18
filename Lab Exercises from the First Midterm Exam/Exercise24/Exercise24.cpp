#include <iostream>
using namespace std;

int rastecki(int n) {
    int prva = n / 10000;
    int treta = (n / 100) % 10;
    int petta = n % 10;

    return prva < treta && treta < petta;
}

int main() {
    int num;
    cin >> num;

    int vtora = (num / 1000) % 10;
    int treta = (num / 100) % 10;
    int zbir = vtora + treta;

    if (zbir == 0) {
        cout << -1;
    }
    else if (num % zbir == 0 && rastecki(num)) {
        cout << 1;
    }
    else {
        cout << 0;
    }

    return 0;
}
