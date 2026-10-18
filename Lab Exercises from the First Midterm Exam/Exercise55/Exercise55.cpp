#include <iostream>
using namespace std;

int main() {
    long long joker = 0;
    long long sum = 0;
    int count = 0;
    int num;

    while (cin >> num) {
        if (num < 1 || num > 90) {
            break;
        }
        count++;
        if (count <= 7) {
            joker = joker * 10 + (num % 10);
        } else {
            sum += num;
        }
    }

    cout << joker + sum << endl;

    return 0;
}
