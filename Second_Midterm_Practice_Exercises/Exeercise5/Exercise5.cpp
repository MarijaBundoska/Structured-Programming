
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    float type, stake, maxType;
    char code[10], maxCode[10];
    float odds, maxOdds = 0.0, winnings = 1;

    cin >> stake;

    if (cin >> maxCode >> maxType >> maxOdds) {
        winnings = stake * maxOdds;

        while (cin >> code >> type >> odds) {
            winnings *= odds;

            if (odds > maxOdds) {
                strcpy(maxCode, code);
                maxType = type;
                maxOdds = odds;
            }
        }

        cout << maxCode << " " << maxType << " " << maxOdds << endl;
        cout << winnings << endl;
    }

    return 0;
}
