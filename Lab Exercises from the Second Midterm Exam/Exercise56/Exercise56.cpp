#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int mat[100][100];

    // Reading the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    int y;
    cin >> y;

    // Storing the main diagonal in a temporary array
    int mainDiagonal[100];
    for (int i = 0; i < n; i++) {
        mainDiagonal[i] = mat[i][i];
    }

    // Replacing the main diagonal with column Y
    for (int i = 0; i < n; i++) {
        mat[i][i] = mat[i][y];
    }

    // Replacing column Y with the elements of the main diagonal
    for (int i = 0; i < n; i++) {
        mat[i][y] = mainDiagonal[i];
    }

    // Replacing row Y with the elements of the main diagonal
    for (int j = 0; j < n; j++) {
        mat[y][j] = mainDiagonal[j];
    }

    // Printing the modified matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
