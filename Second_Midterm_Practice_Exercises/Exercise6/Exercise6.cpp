
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int matrix[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cin >> matrix[i][j];
    }

    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m - 2; j++) {
            if (matrix[i][j] == 1 &&
                matrix[i][j + 1] == 1 &&
                matrix[i][j + 2] == 1) {
                count++;
                break;
            }
        }
    }

    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n - 2; i++) {
            if (matrix[i][j] == 1 &&
                matrix[i + 1][j] == 1 &&
                matrix[i + 2][j] == 1) {
                count++;
                break;
            }
        }
    }

    cout << count;

    return 0;
}
