#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[100];
    float sum = 0.0;
    float avgPrice = 0.0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    avgPrice = sum / (float)n;

    for (int i = 0; i < n; i++) {
        if (arr[i] < avgPrice) {
            arr[i] = 0;
        } else {
            arr[i] = 1;
        }
    }

    cout << "Average price: " << avgPrice << endl;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
