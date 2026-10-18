#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e, f;
    float p1, p2;

    cin >> a >> b >> c >> d >> e >> f;

    p1 = (a + b + c + d + e) / 5.0;
    p2 = (a + b + c + d + e + f) / 6.0;

    int enrolledSubjects = 5;
    bool getsScholarship = false;

    if (p2 > p1) {
        enrolledSubjects = 6;
    } else {
        enrolledSubjects = 5;
    }
  
    if (enrolledSubjects == 6 && p2 >= 8.5) {
        getsScholarship = true;
    } else {
        getsScholarship = false;
    }

    cout << "Enrolled " << enrolledSubjects << " subjects" << endl;
    cout << (getsScholarship ? 1 : 0) << endl;

    return 0;
}
