#include <iostream>
using namespace std;

int main() {
    int largerNumber, smallerNumber;
    int temp;
    int digit1, digit2;
    int isEvenEquivalent;

    cin >> largerNumber >> smallerNumber;

    if (largerNumber <= 0 || smallerNumber <= 0) {
        cout << "Invalid input" << endl;
        return 0;
    }

    if (smallerNumber > largerNumber) {
        temp = smallerNumber;
        smallerNumber = largerNumber;
        largerNumber = temp;
    }

    isEvenEquivalent = 1;

    while (largerNumber > 0) {
        digit1 = smallerNumber % 10;
        digit2 = (largerNumber % 100) / 10;

        if (digit1 != digit2) {
            isEvenEquivalent = 0;
            break;
        }

        smallerNumber /= 10;
        largerNumber /= 100;
    }

    if (isEvenEquivalent) {
        cout << "PAREN" << endl;
    } else {
        cout << "NE" << endl;
    }

    return 0;
}
