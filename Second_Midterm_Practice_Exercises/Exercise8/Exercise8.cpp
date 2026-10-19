
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main() {
    char str[101];
    int firstPos, lastPos, maxFirstPos, maxLastPos;
    char maxStr[101];
    int length, maxLength = 0, count;

    while (cin.getline(str, 101)) {
        if (strcmp(str, "0") == 0) {
            break;
        }

        count = firstPos = lastPos = 0;
        length = (int)strlen(str);
        bool found = false;

        for (int i = 0; i < strlen(str); i++) {
            if (str[i] >= '0' && str[i] <= '9') {
                if (firstPos == 0 && !found) {
                    firstPos = i;
                    found = true;
                }

                count++;

                if (count >= 2)
                    break;
            }
        }

        for (int i = strlen(str) - 1; i >= 0; i--) {
            if (str[i] >= '0' && str[i] <= '9') {
                lastPos = i;
                break;
            }
        }

        if (length >= maxLength && lastPos != 0) {
            maxLength = length;
            maxFirstPos = firstPos;
            maxLastPos = lastPos;
            strcpy(maxStr, str);
        }
    }

    for (int i = maxFirstPos; i <= maxLastPos; i++)
        cout << maxStr[i];

    return 0;
}
