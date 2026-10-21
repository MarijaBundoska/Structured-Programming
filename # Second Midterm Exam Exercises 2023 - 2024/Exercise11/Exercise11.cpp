#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int A[100][100];
    int B[100][100];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
            B[i][j] = A[i][j];
        }
    }

    int k;
    cin >> k;

    if (k == 1) {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                B[i][j] = 2 * A[i][j];
            }
        }
    } else {
        for (int i = 0; i + k <= m; i++) {
            for (int j = 0; j + k <= n; j++) {
                int sum = 0;

                for (int x = 0; x < k; x++) {
                    sum += A[i + x][j];
                    sum += A[i + x][j + k - 1];
                }

                for (int x = 1; x < k - 1; x++) {
                    sum += A[i + x][j + x];
                }

                B[i][j] = sum;
            }
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << B[i][j];
            if (j < n - 1) {
                cout << " ";
            }
        }
        cout << '\n';
    }

    return 0;
}
