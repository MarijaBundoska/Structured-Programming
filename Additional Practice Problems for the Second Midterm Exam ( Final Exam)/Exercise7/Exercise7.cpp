#include <iostream>
using namespace std;

void moveNegatives(int arr[], int n) {
    int result[n];

    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n; i++) {
            if (arr[i] >= 0) {
                result[j++] = arr[i];
            }
        }

        for (int i = 0; i < n; i++) {
            if (arr[i] < 0) {
                result[j++] = arr[i];
            }
        }

        for (int i = 0; i < n; i++) {
            arr[i] = result[i];
        }
    }
}

int main() {
    int array[100], n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    moveNegatives(array, n);

    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }

    return 0;
}
