#include <iostream>
using namespace std;

long long nzd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    long long a, b;
    
    if (!(cin >> a >> b)) {
        return 0;
    }

    long long gcd = nzd(a, b);
    long long lcm = (a / gcd) * b;

    cout << "The LCM of " << a << " and " << b << " is " << lcm << endl;
    cout << "The GCD of " << a << " and " << b << " is " << gcd << endl;

    return 0;
}
