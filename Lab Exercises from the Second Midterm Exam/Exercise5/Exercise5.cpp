#include <iostream>
using namespace std;

int main() {
    int number;
    int count = 0;
    int array[100];

    while (cin >> number) {
        if (number == -1) {
            break;
        }
        array[count++] = number;
    }

    int left, right, value, intervalType;

    for (int s = 0; s < 3; s++) {
        cin >> left >> right >> value >> intervalType;

        if (intervalType == 0) {
            for (int i = left; i <= right; i++) {
                array[i] += value;
            }
        } else if (intervalType == 1) {
            for (int i = left + 1; i < right; i++) {
                array[i] += value;
            }
        }
    }

    for (int i = 0; i < count; i++) {
        cout << array[i] << " ";
    }

    return 0;
}
