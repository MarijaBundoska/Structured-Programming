#include <iostream>
using namespace std;

int main() {
    int m;
    cin >> m;

    for (int row = 1; row <= m; row++) {
        for (int col = 1; col <= m; col++) {
            if (row == 1 || row == m) {
                if (col == 1 || col == m) {
                    cout << '%';
                } else {
                    cout << '@';
                }
            } else {
                if (col == 1 || col == m) {
                    cout << '%';
                } else {
                    cout << '.';
                }
            }
        }
        cout << '\n';
    }

    return 0;
}
