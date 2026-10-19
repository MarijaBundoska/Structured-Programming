
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

    int rowIndex, colIndex;
    cin >> rowIndex >> colIndex;

    int q1, q2, q3, q4;
    q1 = q2 = q3 = q4 = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i < rowIndex) {
                if (j < colIndex)
                    q2 += matrix[i][j];
                else
                    q1 += matrix[i][j];
            } else {
                if (j < colIndex)
                    q3 += matrix[i][j];
                else
                    q4 += matrix[i][j];
            }
        }
    }

    cout << q1 << " " << q2 << " " << q3 << " " << q4 << " ";

    return 0;
}
