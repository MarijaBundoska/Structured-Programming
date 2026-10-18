#include <iostream>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) {
        return 0;
    }

    int best_semester = 1;
    double max_avg = -1.0;
    double best_percentage = 0.0;

    for (int i = 1; i <= n; i++) {
        int m;
        cin >> m;
        double sum = 0;
        for (int j = 0; j < m; j++) {
            double grade;
            cin >> grade;
            sum += grade;
        }
        int pred;
        cin >> pred;

        double avg = (sum / m) * ((double)m / pred) + (1.0 - (double)m / pred) * 5.0;
        double perc = ((double)m / pred) * 100.0;

        if (i == 1 || avg > max_avg) {
            max_avg = avg;
            best_semester = i;
            best_percentage = perc;
        }
    }

    cout << "Semester: " << best_semester << endl;
    cout << "Grade point average : " << max_avg << ", percentage of subjects passed: " << best_percentage << "%" << endl;

    return 0;
}
