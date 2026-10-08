#include <cstring>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int matrix[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cin >> matrix[i][j];
    }

    int firstSum, secondSum;

    if(m % 2 == 0) {
        for (int i = 0; i < n; i++) {
            firstSum = secondSum = 0;

            for (int j = 0; j < m; j++) {
                if (j < m / 2)
                    firstSum += matrix[i][j];
                else
                    secondSum += matrix[i][j];
            }

            matrix[i][m / 2 - 1] = abs(firstSum - secondSum);
            matrix[i][m / 2] = abs(firstSum - secondSum);
        }
    }
    else {
        for (int i = 0; i < n; i++) {
            firstSum = secondSum = 0;

            for (int j = 0; j < m; j++) {
                if (j <= m / 2)
                    firstSum += matrix[i][j];
                else
                    secondSum += matrix[i][j];
            }

            secondSum += matrix[i][m / 2];
            matrix[i][m / 2] = abs(firstSum - secondSum);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << matrix[i][j] << " ";

        cout << endl;
    }

}
