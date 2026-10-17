#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int arr[100], n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        arr[i] *= 2;
    }

    for (int i = 0; i < n; i++) {
        cout << abs(arr[i]) << " ";
    }

    return 0;
}
