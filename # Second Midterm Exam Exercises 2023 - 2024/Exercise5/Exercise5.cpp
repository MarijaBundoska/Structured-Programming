
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

    for (int size = 2; size <= m && size <= n; size++) {
        int sum = 0;

        for (int i = 0; i < size; i++) {
            sum += matrix[i][0];
            sum += matrix[i][size - 1];
        }

        for (int i = 1; i < size - 1; i++) {
            sum += matrix[i][i];
        }

        cout << sum << endl;
    }

    return 0;
}
