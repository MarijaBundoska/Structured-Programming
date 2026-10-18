#include <iostream>
using namespace std;

int countDigits(int num) {
    if (num == 0) return 1;
    int count = 0;
  
    while (num > 0) {
        count++;
        num /= 10;
    }
    return count;
}

int main() {
    int x;
    if (cin >> x) {
        int xDigits = countDigits(x);
        int currentNum;

      
        while (cin >> currentNum) {
          
            if (countDigits(currentNum) == xDigits) {
                cout << currentNum << endl;
            }
        }
    }

    return 0;
}
