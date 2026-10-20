#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    double matrix[n][n];
    double b[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
            b[i][j] = 0;
        }
    }

    double mainDiagonalSum = 0, secondaryDiagonalSum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i > j)
                mainDiagonalSum += matrix[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j > n - 1)
                secondaryDiagonalSum += matrix[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                b[i][j] = mainDiagonalSum;

                if (n % 2) {
                    if (i == n / 2 && j == n / 2)
                        b[i][j] = mainDiagonalSum + secondaryDiagonalSum;
                }
            }
            else if (i + j == n - 1)
                b[i][j] = secondaryDiagonalSum;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << b[i][j] << " ";

        cout << endl;
    }
}
