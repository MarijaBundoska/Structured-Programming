#include <iostream>
#include <cstring>
using namespace std;

int main() {
    float type, bet, maxType;
    char code[10], maxCode[10];
    float coefficient, maxCoefficient = 0.0, winnings = 1;

    cin >> bet;

    if (cin >> maxCode >> maxType >> maxCoefficient) {
        winnings = bet * maxCoefficient;

        while (cin >> code >> type >> coefficient) {
            winnings *= coefficient;

            if (coefficient > maxCoefficient) {
                strcpy(maxCode, code);
                maxType = type;
                maxCoefficient = coefficient;
            }
        }

        cout << maxCode << " " << maxType << " " << maxCoefficient << endl;
        cout << winnings << endl;
    }

    return 0;
}
