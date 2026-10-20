#include <iostream>
#include <cstring>
using namespace std;

void bubble(char arr[], int size) {
    bool isSwapped = true;

    while (isSwapped) {
        isSwapped = false;

        for (int i = 0; i < size - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
                isSwapped = true;
            }
        }
    }
}

int main() {
    char text[101];
    char digits[101];
    int count, index;

    while (cin.getline(text, 101)) {
        if (strcmp(text, "#") == 0) {
            break;
        }

        count = index = 0;

        for (int i = 0; i < strlen(text); i++) {
            if (text[i] >= '0' && text[i] <= '9') {
                count++;
                digits[index] = text[i];
                index++;
            }
        }

        cout << count << ":";

        bubble(digits, index);

        for (int i = 0; i < index; i++) {
            cout << digits[i];
        }

        cout << endl;
    }

    return 0;
}
