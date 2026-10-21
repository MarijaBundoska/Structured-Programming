#include <iostream>
using namespace std;

int spoji(int i, int j) {
    int temp = j;
    int multiplier = 10;

    while (temp >= 10) {
        multiplier *= 10;
        temp /= 10;
    }

    return i * multiplier + j;
}

int main() {
    int mat[120][120];
    int n, m;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }

    for (int j = 0; j < m; j++) {
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (mat[i][j] == spoji(i, j)) {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
