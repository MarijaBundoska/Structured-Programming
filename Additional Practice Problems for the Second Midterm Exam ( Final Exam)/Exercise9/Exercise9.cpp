#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int countConjunctions(char sentence[]) {
    int count = 0;
    int length = 0;

    for (int i = 0; sentence[i] != '\0'; i++) {
        if (isalpha(sentence[i])) {
            length++;
        } else {
            if (length >= 1 && length <= 3) {
                count++;
            }
            length = 0;
        }
    }

    if (length >= 1 && length <= 3) {
        count++;
    }

    return count;
}

int main() {
    char sentence[101];
    char bestSentence[101];

    int maxCount = -1;
    bool first = true;

    while (cin.getline(sentence, 101)) {
        if (strlen(sentence) == 0) continue;
        int currentCount = countConjunctions(sentence);

        if (first || currentCount > maxCount) {
            maxCount = currentCount;
            strcpy(bestSentence, sentence);
            first = false;
        }
    }

    if (!first) {
        cout << maxCount << ": " << bestSentence << endl;
    }

    return 0;
}
