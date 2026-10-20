#include <iostream>
using namespace std;

int main() {
    int matrix[30][30];
    int m, n, r, k;
    int minimum;

    cin >> m >> n;
    cin >> r >> k;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    minimum = matrix[0][0];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] < minimum) {
                minimum = matrix[i][j];
            }
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < k; j++) {
            matrix[i][j] = minimum;
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
