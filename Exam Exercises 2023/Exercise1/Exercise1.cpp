#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

bool isVowel(char character) {
    if (character == 'a' || character == 'i' || character == 'o' || character == 'e' || character == 'u') {
        return true;
    }
    return false;
}

int main() {
    char text[1001];
    int count = 0;

    while (cin.getline(text, 1001)) {
        if (text[0] == '#')
            break;

        for (int i = 0; i < strlen(text); i++) {
            if (isVowel(tolower(text[i])) && isVowel(tolower(text[i + 1]))) {
                count++;
                cout << (char)tolower(text[i]) << (char)tolower(text[i + 1]) << endl;
            }
        }
    }

    cout << count;
    return 0;
}
