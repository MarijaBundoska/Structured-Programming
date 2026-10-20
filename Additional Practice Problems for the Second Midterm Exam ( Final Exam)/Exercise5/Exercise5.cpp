#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    double matrix[50][50];
    double result[50][50];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
            result[i][j] = matrix[i][j];
        }
    }

    int startRow, startCol, endRow, endCol;
    cin >> startRow >> startCol;
    cin >> endRow >> endCol;

    for (int i = startRow; i <= endRow; i++) {
        for (int j = startCol; j <= endCol; j++) {
            double sum = 0;
            int count = 0;

            for (int k = i - 1; k <= i + 1; k++) {
                for (int l = j - 1; l <= j + 1; l++) {
                    if (k >= 0 && k < n && l >= 0 && l < m) {
                        sum += matrix[k][l];
                        count++;
                    }
                }
            }

            result[i][j] = sum / count;
        }
    }

    cout << setprecision(6);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (j > 0) {
                cout << " ";
            }
            cout << result[i][j];
        }
        cout << endl;
    }

    return 0;
}
