#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int containsSpecialCharacter(char text[]) {
    for (int i = 0; i < strlen(text); i++) {
        if (ispunct(text[i])) {
            return 1;
        }
    }
    return 0;
}

int isPalindrome(char text[], int start, int end) {
    if (start >= end) {
        return 1;
    }

    if (text[start] == text[end] && containsSpecialCharacter(text)) {
        return isPalindrome(text, start + 1, end - 1);
    }

    return 0;
}

int main() {
    char currentString[81];
    char longestString[81] = "";
    int length;
    int maxLength = 0;
    int n;

    cin >> n;
    cin.get();

    for (int i = 0; i < n; i++) {
        cin.getline(currentString, 81);
        length = strlen(currentString);

        if (isPalindrome(currentString, 0, length - 1) &&
            length > maxLength) {
            strcpy(longestString, currentString);
            maxLength = length;
        }
    }

    if (strcmp(longestString, "") == 0) {
        cout << "Nema!";
    } else {
        cout << longestString << endl;
    }

    return 0;
}
