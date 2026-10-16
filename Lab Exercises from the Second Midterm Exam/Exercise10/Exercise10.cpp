#include <iostream>
using namespace std;

void readMatrix(int matrix[100][100], int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> matrix[i][j];
        }
    }
}

int main() {
    int a[100][100], b[100][100], n, m, count = 0;

    cin >> n >> m;

    readMatrix(a, n, m);
    readMatrix(b, n, m);

    for (int j1 = 0; j1 < m; j1++) {
        for (int j2 = 0; j2 < m; j2++) {
            bool found = true;

            for (int i = 0; i < m; i++) {
                if (a[i][j1] != b[i][j2]) {
                    found = false;
                    break;
                }
            }

            if (found) {
                count++;
                break;
            }
        }
    }

    cout << count;

    return 0;
}
