#include <iostream>
using namespace std;

void printSequence(int n) {
    cout << n << " ";

    if (n > 0) {
        printSequence(n - 5);
        cout << n << " ";
    }
}

int main() {
    int n;
    cin >> n;

    printSequence(n);

    return 0;
}
