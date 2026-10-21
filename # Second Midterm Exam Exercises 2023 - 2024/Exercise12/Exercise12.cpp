
#include <iostream>
using namespace std;

char firstUppercase(char text[], int index) {
    if (text[index] == '\0') {
        return '\0';
    }

    if (text[index] >= 'A' && text[index] <= 'Z') {
        return text[index];
    }

    return firstUppercase(text, index + 1);
}

int main() {
    char text[101];
    cin.getline(text, 101);

    char result = firstUppercase(text, 0);

    if (result != '\0') {
        cout << result << endl;
    } else {
        cout << "Nema" << endl;
    }

    return 0;
}
