
#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int matrix[100][100];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int size = 2;

    while (size <= m && size <= n) {
        int sum = 0;

        // First row of Z
        for (int j = 0; j < size; j++) {
            sum += matrix[0][j];
        }

        // Diagonal of Z
        for (int i = 1; i < size - 1; i++) {
            sum += matrix[i][size - 1 - i];
        }

        // Last row of Z
        for (int j = 0; j < size; j++) {
            sum += matrix[size - 1][j];
        }

        cout << sum << endl;
        size++;
    }

    return 0;
}
