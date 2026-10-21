
#include <iostream>
#include <cstring>
using namespace std;

int countOccurrences(char sentence[], char startString[]) {
    int count = 0;
    int sentenceLength = strlen(sentence);
    int stringLength = strlen(startString);

    for (int i = 0; i <= sentenceLength - stringLength; i++) {
        int j = 0;

        while (j < stringLength &&
               sentence[i + j] == startString[j]) {
            j++;
        }

        if (j == stringLength) {
            count++;
        }
    }

    return count;
}

int main() {
    char startString[21];
    cin.getline(startString, 21);

    int n;
    cin >> n;
    cin.ignore(1000, '\n');

    int frequency[101] = {0};
    int maxOccurrences = 0;

    for (int i = 0; i < n; i++) {
        char sentence[101];
        cin.getline(sentence, 101);

        int occurrences = countOccurrences(sentence, startString);

        frequency[occurrences]++;

        if (occurrences > maxOccurrences) {
            maxOccurrences = occurrences;
        }
    }

    for (int i = 0; i <= maxOccurrences; i++) {
        cout << i << ": " << frequency[i] << endl;
    }

    return 0;
}
