#include <iostream>
using namespace std;

int main() {
    int credits, year;
    double average, points = 0;
    int predictedCredits;

    cin >> credits >> year >> average;

    if (year >= 2010 && year <= 2023) {
        if (credits > 100 && average > 8) {
            predictedCredits = (2023 - year) * 60;

            points = (credits / predictedCredits) * 10
                     + (average - 8.5) * 6.5;

            if (credits > 240) {
                cout << "Needs to graduate! ";
            }

            if (average > 9) {
                cout << "Great student! ";
            }
        }
    }

    cout << "Points: " << points << endl;

    return 0;
}
