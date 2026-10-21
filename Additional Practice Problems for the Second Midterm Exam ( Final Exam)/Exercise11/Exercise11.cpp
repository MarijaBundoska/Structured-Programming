#include <iostream>
#include <cmath>
using namespace std;

void nuli(int *array, int size) {
    for (int i = 0; i < size; i++) {
        array[i] = 0;
    }
}

void printarray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void shiftright(int *arr, int size, int k) {
    for (int i = size - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    for (int i = 0; i < k; i++) {
        arr[i] = 0;
    }
}

void shiftleft(int *arr, int size, int position) {
    for (int i = 0; i < size - position; i++) {
        arr[i] = arr[i + position];
    }

    for (int i = size - position; i < size; i++) {
        arr[i] = 0;
    }
}

int transform(int *array, int size) {
    int firstElement = array[0];

    if (abs(firstElement) >= size) {
        nuli(array, size);
        return 1;
    }

    if (firstElement > 0) {
        shiftright(array, size, firstElement);
    } else if (firstElement < 0) {
        shiftleft(array, size, abs(firstElement));
    }

    for (int i = 0; i < size; i++) {
        if (array[i] != 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int m, n, array[100];
    int zeroArrays = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> m;

        for (int j = 0; j < m; j++) {
            cin >> array[j];
        }

        if (transform(array, m)) {
            zeroArrays++;
        }

        printarray(array, m);
    }

    cout << zeroArrays << endl;

    return 0;
}
