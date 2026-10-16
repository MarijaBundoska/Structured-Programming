#include <iostream>
using namespace std;

int main() {
    int array[100];
    int n = 0, number;

    while (cin >> number) {
        array[n++]=number;

        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n; j++) {
                if (array[i] == array[j]) {
                    array[j] += (j - i);
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }

    return 0;
}
