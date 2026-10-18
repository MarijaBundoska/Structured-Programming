#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a, b;
    if (!(cin >> a >> b)) {
        return 0;
    }

    int total_numbers = b - a;
    if (total_numbers <= 0) {
        cout << 0 << endl;
        return 0;
    }

    int match_count = 0;
    for (int i = a + 1; i <= b; i++) {
        bool condition = false;
        if (i % 2 == 0 && i % 7 == 0) {
            condition = true;
        } else if (i % 2 != 0 && i % 3 != 0) {
            condition = true;
        }

        if (condition) {
            cout << i << endl;
            match_count++;
        }
    }

    if (match_count == 0) {
        cout << 0 << endl;
    } else {
        double percentage = (double)match_count / total_numbers * 100.0;
        cout << percentage << "%" << endl;
    }

    return 0;
}
