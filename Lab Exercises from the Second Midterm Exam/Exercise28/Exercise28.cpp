
#include <iostream>
using namespace std;
bool isInteresting(int number) {
    bool isEven = number % 10 % 2 == 0;
    while (number /= 10) {
        if ((number % 10 % 2 == 0) == isEven)
            return false;
        isEven = !isEven;
    }
    return true;
}

void printArray(int numbers[], int n) {
    if (n == 0)
        return;

    if (isInteresting(numbers[n - 1]))
        cout<< numbers[n - 1]<<endl;

    printArray(numbers, n - 1);
}

int main() {
    int n;
    std::cin >> n;

    int numbers[100]; // Assuming a maximum size of 100 elements
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }
    printArray(numbers, n);

    return 0;
}
