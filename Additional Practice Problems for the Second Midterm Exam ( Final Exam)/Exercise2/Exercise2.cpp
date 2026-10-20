
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, number = 1, i, j, size;
    cin >> n;

    size = ceil(sqrt(n));

    int matrix[size][size];

    for (j = 0; j < size; j++) {
        for (i = 0; i < size; i++) {
            if (number <= n) {
                matrix[i][j] = number++;
            } else {
                matrix[i][j] = 0;
            }
        }

        j++;

        if (j < size) {
            for (i = size - 1; i >= 0; i--) {
                if (number <= n) {
                    matrix[i][j] = number++;
                } else {
                    matrix[i][j] = 0;
                }
            }
        }
    }

    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
