#include <iostream>
using namespace std;

int par(int a[], int n) {
    int minimum = 0;

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
            }
        }

        if (count % 2 == 0) {
            if (minimum == 0 || a[i] < minimum) {
                minimum = a[i];
            }
        }
    }

    return minimum;
}

int main() {
    int a[100], n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int result = par(a, n);

    if (result == 0) {
        cout << "Nitu eden element ne se pojavuva paren broj pati!";
    } else {
        cout << "Najmaliot element koj se pojavuva paren broj pati e " << result;
    }

    return 0;
}
