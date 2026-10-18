#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n > 60 || n < 1) {
        cout << "Student will not be served at all";
        return 0;
    }

    int time = (n - 1) * 5;

    if (time >= 120) {
        time += 30;
    }

    if (time >= 180) {
        time += 30;
    }

    if (time >= 360) {
        cout << "Student will not be served at all";
        return 0;
    }

    int hours = time / 60;
    int minutes = time % 60;

    cout << "Hours: " << hours << ", minutes: " << minutes;

    return 0;
}
