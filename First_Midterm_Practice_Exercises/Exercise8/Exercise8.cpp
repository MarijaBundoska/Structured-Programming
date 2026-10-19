#include <iostream>
using namespace std;

bool isTotallyDifferent(int number, int x) {
    int tempNumber = number;

    while (tempNumber > 0) {
        int digit = tempNumber % 10;
        int tempX = x;

        while (tempX > 0) {
            int digitX = tempX % 10;

            if (digit == digitX) {
                return false;
            }

            tempX /= 10;
        }

        tempNumber /= 10;
    }

    return true;
}

int main() {
    int N, X;
    cin >> N >> X;

    for (int number = N - 1; number >= 0; number--) {
        if (isTotallyDifferent(number, X)) {
            cout << number;
            return 0;
        }
    }

    return 0;
}
