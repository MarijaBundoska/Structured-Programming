#include <iostream>
#include <string>
using namespace std;

int main() {
    string first, second;
    if (!(cin >> first >> second)) {
        return 0;
    }

    bool valid = true;

    for (int i = 1; i < first.length(); i += 2) {
        char target = first[i];
        bool found = false;
        for (int j = 0; j < second.length(); j += 2) {
            if (second[j] == target) {
                found = true;
                break;
            }
        }
        if (!found) {
            valid = false;
            break;
        }
    }

    if (valid) {
        cout << "DA" << endl;
    } else {
        cout << "NE" << endl;
    }

    return 0;
}
