#include <iostream>
using namespace std;

int sumOfDivisors(int number) {
    int i, sum = 0;

    for (i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    return sum;
}

int main() {
    int n, maxSum, result, i, currentSum;
    cin >> n;

    maxSum = 0;
    result = 0;

    for (i = 1; i < n; i++) {
        currentSum = sumOfDivisors(i);

        if (currentSum > maxSum) {
            maxSum = currentSum;
            result = i;
        }
    }

    cout << result;

    return 0;
}
