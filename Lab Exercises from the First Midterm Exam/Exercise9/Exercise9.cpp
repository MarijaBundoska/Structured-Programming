#include <iostream>
using namespace std;

int main() {
    int fourDigit, threeDigit;
    cin >> fourDigit >> threeDigit;

    int tempFour = fourDigit;
    int tempThree = threeDigit;

    int sum = 0, count = 0;

    // Odd positions of the four-digit number
    while (tempFour > 0) {
        sum += tempFour % 10;
        count++;
        tempFour /= 100;
    }

    // Even positions of the three-digit number (including position 0)
    while (tempThree > 0) {
        sum += tempThree % 10;
        count++;
        tempThree /= 100;
    }

    float average = (float)sum / count;

    cout << average << endl;

    return 0;
}
