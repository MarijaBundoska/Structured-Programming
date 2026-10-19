#include <iostream>
using namespace std;

int main() {
    int number;
    int positionCounts[5] = {0, 0, 0, 0, 0};

    while (cin >> number) {
        int tempNumber = number;
        int maxDigit = -1;
        int maxPosition = 0;
        int position = 0;

        while (tempNumber > 0) {
            int digit = tempNumber % 10;

            if (digit > maxDigit) {
                maxDigit = digit;
                maxPosition = position;
            }

            tempNumber /= 10;
            position++;
        }

        positionCounts[maxPosition]++;
    }

    for (int i = 0; i < 5; i++) {
        cout << i << ": " << positionCounts[i] << endl;
    }

    return 0;
}
