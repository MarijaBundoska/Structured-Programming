#include <iostream>
#include <cctype>
using namespace std;

char findPunctuation(char text[], int index) {
    if (text[index] == '\0') {
        return '\0';
    }

    if (ispunct((unsigned char)text[index])) {
        return text[index];
    }

    return findPunctuation(text, index + 1);
}

int main() {
    char text[101];
    cin.getline(text, 101);

    char result = findPunctuation(text, 0);

    if (result != '\0') {
        cout << result;
    } else {
        cout << "Nema";
    }

    return 0;
}
