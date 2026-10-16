#include <iostream>
using namespace std;

void print(int n) {
    if (n != 0) {
        cout << "*";
        print(n - 1);
    }
    else {
        cout << endl;
    }
}

void form(int n) {
    if (n == 0) {
        return;
    }
    else {
        print(n);
        form(n - 1);
    }
}

int main() {
    int number;
    cin >> number;
    form(number);

    return 0;
}
