#include <iostream>
using namespace std;

int max(int array[], int size) {
    int maximum = 0;
    for (int i = 0; i < size; i++) {
        if (i == 0) {
            maximum = array[i];
        }
        else {
            if (array[i] > maximum) {
                maximum = array[i];
            }
        }
    }
    return maximum;
}

int min(int array[], int size) {
    int minimum = 0;
    for (int i = 0; i < size; i++) {
        if (i == 0) {
            minimum = array[i];
        }
        else {
            if (array[i] < minimum) {
                minimum = array[i];
            }
        }
    }
    return minimum;
}

int main() {
    int array[100], n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int minElement = min(array, n);
    int maxElement = max(array, n);
    int difference = maxElement - minElement;

    for (int i = 0; i < n; i++) {
        array[i] += difference;
    }

    cout << "MAX -> " << maxElement << endl;
    cout << "MIN -> " << minElement << endl;

    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }

    return 0;
}
