#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 0 || n > 60) {
        cout << "Studentot ne e voopsto usluzen" << endl;
        return 0;
    }

    int servedBefore = n - 1;

    int waitTime = servedBefore * 5;

    if (servedBefore >= 24) {
        waitTime += 30;
    }

    if (servedBefore >= 36) {
        waitTime += 30;
    }

    int hours = waitTime / 60;
    int minutes = waitTime % 60;

    cout << "Hours: " << hours << ", minutes: " << minutes << endl;

    return 0;
}
