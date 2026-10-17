#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Number of arrays

    for (int i = 0; i < n; i++) {
        int len;
        cin >> len; // Length of the current array

        int arr[len];
        for (int j = 0; j < len; j++) {
            cin >> arr[j]; // Reading the array elements
        }

        int k;
        cin >> k; // Reading the number k

        // Transforming the array
        for (int j = k - 1; j < len; j += k) {
            if (j + 1 < len) {
                // If a successor exists
                arr[j] = arr[j] * (j + 1) - arr[j + 1];
            } else {
                // If there is no successor, use the predecessor
                arr[j] = arr[j] * (j + 1) + arr[j - 1];
            }
        }

        // Printing the transformed array
        for (int j = 0; j < len; j++) {
            cout << arr[j] << " ";
        }
        cout << endl;
    }

    return 0;
}
