#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int maxDigit(int n) {
    if(n < 10)
        return n;

    int digit = n % 10;
    int maxRemainingNumber = maxDigit(n / 10);

    if(digit > maxRemainingNumber)
        return digit;
    else
        return maxRemainingNumber;
}

int main() {
    int n;

    while(cin >> n) {
        cout << maxDigit(n) << endl;
    }
}
