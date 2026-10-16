#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    float n, sum = 0;
    float a[100];

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        sum += a[i];
    }

    double avg = sum / n;
    double closest = a[0];
    double closestDifference = abs(a[0] - avg);

    for (int i = 1; i < n; i++) {
        double difference = abs(a[i] - avg);

        if (difference < closestDifference) {
            closest = a[i];
            closestDifference = difference;
        }
    }

    cout << fixed << setprecision(2) << closest << endl;

    return 0;
}
