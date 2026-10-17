#include <iostream>
using namespace std;

int main() {
    int arr[100], n, greaterCount = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        greaterCount = 0;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                greaterCount++;
            }
        }

        if (greaterCount >= 2) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
