#include <iostream>
using namespace std;

int main() {
    int evenCount = 0, evenPositions = 0, oddCount = 0, oddPositions = 0;
    int array[100], n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    for (int i = 0; i < n; i += 2) {
        if (array[i] % 2 == 0) {
            evenCount++;
        }
        evenPositions++;
    }

    for (int i = 1; i < n; i += 2) {
        if (array[i] % 2 != 0) {
            oddCount++;
        }
        oddPositions++;
    }

    if ((float)evenCount / (float)evenPositions >= 0.5 &&
        (float)oddCount / (float)oddPositions <= 0.3) {
        cout << "1";
    } else {
        cout << "0";
    }

    return 0;
}
