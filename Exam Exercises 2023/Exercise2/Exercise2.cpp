#include <iostream>
#include <cstring>
using namespace std;

int mostSignificantDigit(int number) {
    while (number > 9)
        number /= 10;
    return number;
}

int main() {
    int n;
    int arr[1000];
    int maxDigit;
    int maxIndex = 0;

    while (cin >> n) {
        maxDigit = 0;

        if (n == 0)
            break;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];

            if (mostSignificantDigit(arr[i]) > maxDigit) {
                maxDigit = mostSignificantDigit(arr[i]);
                maxIndex = i;
            }
        }

        cout << arr[maxIndex] << endl;
    }

    return 0;
}
