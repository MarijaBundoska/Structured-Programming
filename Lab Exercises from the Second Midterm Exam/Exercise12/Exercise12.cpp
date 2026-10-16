#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    float m[n][n];


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> m[i][j];
        }
    }


    for (int i = 0; i < n; i++) {
        float avg = 0.0;
        int count = 0;
        bool flag = false;

        for (int j = 0; j < n; j++) {
            if (i + j == n - 1) {
                flag = true;
                avg /= count;
            }

            if (!flag) {
                avg += m[i][j];
                ++count;
            }

            if (flag && m[i][j] < avg && i + j != n - 1) {
                m[i][j] = -1;
            }

            cout << m[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
