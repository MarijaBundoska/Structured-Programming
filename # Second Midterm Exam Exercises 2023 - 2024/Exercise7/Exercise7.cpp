#include <iostream>
#include <cstring>
using namespace std;

bool isConsonant(char c) {
    if (c >= 'A' && c <= 'Z') {
        c = c - 'A' + 'a';
    }

    return c >= 'a' && c <= 'z' &&
           c != 'a' && c != 'e' &&
           c != 'i' && c != 'o' &&
           c != 'u';
}

int countConsonantGroups(char sentence[]) {
    int count = 0;

    for (int i = 0; sentence[i] != '\0'; i++) {
        if (isConsonant(sentence[i]) &&
            isConsonant(sentence[i + 1])) {

            if (i == 0 || !isConsonant(sentence[i - 1])) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();

    int frequency[101] = {0};
    int maxCount = 0;

    for (int i = 0; i < n; i++) {
        char sentence[101];
        cin.getline(sentence, 101);

        int count = countConsonantGroups(sentence);

        frequency[count]++;

        if (count > maxCount) {
            maxCount = count;
        }
    }

    for (int i = 0; i <= maxCount; i++) {
        cout << i << ": " << frequency[i] << endl;
    }

    return 0;
}
