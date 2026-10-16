#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int matrix[100][100];

    // Reading the matrix
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> matrix[i][j];

    bool valid = true;

    // Checking the condition
    for (int i = 0; i < n - 1; ++i) {
        int sum = 0;
        for (int j = i + 1; j < n; ++j) {
            sum += matrix[i][j];
        }
        if (matrix[i][i] != sum) {
            valid = false;
            break;
        }
    }

    if (valid) {
        // Printing the matrix
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << -1 << endl;
    }

    return 0;
}
