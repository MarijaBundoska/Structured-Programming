#include <iostream>
using namespace std;

int main() {
    int points;
    double attendance;

    cin >> points >> attendance;

    if (points < 0 || points > 100 || attendance <= 0 || attendance > 1) {
        cout << "Nevalidni vlezni podatoci";
    } else if (points >= 60 && attendance >= 0.8) {
        cout << "Odlichna ocenka";
    } else if (points >= 50 && attendance > 0.7) {
        cout << "Zadovolitelna ocenka";
    } else {
        cout << "Prosechen rezultat";
    }

    return 0;
}
