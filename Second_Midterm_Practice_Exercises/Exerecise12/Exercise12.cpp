#include <iostream>
using namespace std;

int countPositive(int arr[], int n) {
    if (n == 0 && arr[n] > 0)
        return 1;
    else if (n == 0 && arr[n] <= 0)
        return 0;

    if (arr[n] > 0)
        return 1 + countPositive(arr, --n);

    return countPositive(arr, --n);
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int count = countPositive(arr, --n);
    cout << count;

    return 0;
}
