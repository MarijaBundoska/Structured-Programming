
#include <iostream>
#include <cmath>
using namespace std;

void specialNumber(int matrix[100][100], int rows, int cols) {
    int i, j;

    for (i = 0; i < rows; i++) {
        int special = 0;

        for (j = 0; j < cols; j++) {
            if (matrix[i][j] % 2 == (i + j) % 2) {
                special++;
            }
        }

        cout << i << ": " << special << endl;
    }
}

int main() {
    int matrix[100][100], n, m;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    specialNumber(matrix, n, m);

    return 0;
}
