
#include <iostream>
using namespace std;

int main() {
    int z, a, b;
    int totalPairs = 0;
    int matchingPairs = 0;
    double percentage;

    cin >> z;

    while (true) {
        cin >> a >> b;

        if (a == 0 && b == 0) {
            break;
        }

        totalPairs++;

        if (a + b == z) {
            matchingPairs++;
        }
    }

    if (totalPairs > 0) {
        percentage = (double) matchingPairs / totalPairs * 100;
    } else {
        percentage = 0;
    }

    cout << "Vnesovte " << matchingPairs
         << " parovi od broevi chij zbir e " << z << endl;

    cout << "Procentot na parovi so zbir " << z
         << " e " << percentage << "%" << endl;

    return 0;
}
