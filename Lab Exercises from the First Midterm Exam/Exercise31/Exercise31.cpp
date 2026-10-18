#include <iostream>
using namespace std;

int points(int levels, int C1, int P1, int C2, int P2, int P3) {
    if (levels > C2) {
        return levels * P3;
    } else if (levels > C1) {
        return levels * P2;
    } else {
        return levels * P1;
    }
}

int main() {
    int P1, C1, P2, C2, P3;
    int A, B, C;

    cin >> P1 >> C1 >> P2 >> C2 >> P3;
    cin >> A >> B >> C;

    int total = points(A, C1, P1, C2, P2, P3)
              + points(B, C1, P1, C2, P2, P3)
              + points(C, C1, P1, C2, P2, P3);

    cout << total << endl;

    return 0;
}
