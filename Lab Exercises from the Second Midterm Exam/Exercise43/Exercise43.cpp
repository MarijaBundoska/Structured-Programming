#include <iostream>
using namespace std;

int main() {
    int n, arr[100], k;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> k;

    for (int i = 0; i < n; i++) {
        if (i == k) {
            swap(arr[i], arr[i - 1]);
        }
    }

    for (int i = n - 1; i > 0; i--) {
        if (i == n - k) {
            swap(arr[i], arr[i - 1]);
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
