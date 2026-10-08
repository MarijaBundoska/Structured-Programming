#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int columns = 2 * n;

    int matrix[n][columns];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < columns; j++)
            cin >> matrix[i][j];
    }

    int result[columns][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = matrix[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = n; j < columns; j++)
            result[n + i][j - n] = matrix[i][j];
    }

    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < n; j++)
            cout << result[i][j] << " ";

        cout << endl;
    }

    return 0;
}
