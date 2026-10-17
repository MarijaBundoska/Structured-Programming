#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int matrix[100][100];

    // Reading the matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    // Replacing the last element in each row with the maximum element of that row
    for (int i = 0; i < m; i++) {
        int maxElement = matrix[i][0];
        for (int j = 1; j < n; j++) {
            if (matrix[i][j] > maxElement) {
                maxElement = matrix[i][j];
            }
        }
        matrix[i][n - 1] = maxElement; // Replacing the last element
    }

    // Calculating the average value of the modified matrix
    double sum = 0;
    int totalElements = m * n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            sum += matrix[i][j];
        }
    }
    double average = sum / totalElements;

    // Printing the modified matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Printing the average value
    cout << average << endl;

    return 0;
}
