#include <iostream>
#include <string>
#include <limits>
using namespace std;

int countOccurrences(string sentence, string startString) {
    int count = 0;
    int length = startString.length();
    int sentenceLength = sentence.length();
    int i = 0;

    while (i <= sentenceLength - length) {
        if (sentence.compare(i, length, startString) == 0) {
            int consecutive = 0;

            while (i <= sentenceLength - length &&
                   sentence.compare(i, length, startString) == 0) {
                consecutive++;
                i += length;
            }

            if (consecutive > 1) {
                count += consecutive - 1;
            }
        } else {
            i++;
        }
    }

    return count;
}

int main() {
    string startString;
    getline(cin, startString);

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int frequency[151] = {0};
    int maxOccurrences = 0;

    for (int i = 0; i < n; i++) {
        string sentence;
        getline(cin, sentence);

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
