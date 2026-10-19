#include <iostream>
using namespace std;

double calculateFraction(int arr[], int n, int i) {
    if (i == n - 1)
        return arr[i];

    return arr[i] + (1.0 / calculateFraction(arr, n, i + 1));
}

int main() {
    int n;
    cin >> n;

    int arr[100];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    double result = calculateFraction(arr, n, 0);
    cout << result;

    return 0;
}
