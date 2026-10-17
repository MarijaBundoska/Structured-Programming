#include <iostream>
using namespace std;

int main() {
    int n, matrix[100][100], neighborSum = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            neighborSum = 0;

            if (matrix[i][j] < 0) {
                if (i > 0) {
                    neighborSum += matrix[i - 1][j];
                }
                if (i < n - 1) {
                    neighborSum += matrix[i + 1][j];
                }
                if (j > 0) {
                    neighborSum += matrix[i][j - 1];
                }
                if (j < n - 1) {
                    neighborSum += matrix[i][j + 1];
                }

                matrix[i][j] = neighborSum;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
