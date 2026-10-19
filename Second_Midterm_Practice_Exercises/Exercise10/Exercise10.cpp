#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char firstChar, secondChar;
    char text[80];
    int firstPosition, secondPosition;
    int foundFirst = 0, foundSecond = 0;
    int printed = 0;

    cin >> firstChar >> secondChar;

    while (cin.getline(text, 80)) {
        if (text[0] == '#') {
            break;
        }

        for (int i = 0; i < strlen(text); i++) {
            if (text[i] == firstChar) {
                firstPosition = i;
                foundFirst = 1;
            } else if (text[i] == secondChar && foundFirst) {
                secondPosition = i;
                foundSecond = 1;
            }
        }

        if (foundFirst && foundSecond) {
            for (int i = firstPosition + 1; i < secondPosition; i++) {
                cout << text[i];
                printed = 1;
            }
        }

        if (printed) {
            cout << endl;
        }
    }

    return 0;
}
