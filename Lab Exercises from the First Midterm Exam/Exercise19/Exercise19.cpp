#include <iostream>
using namespace std;

int main() {
    int p1, p2, p3, p4, p5;
    cin >> p1 >> p2 >> p3 >> p4 >> p5;

    int points = p1 + p2 + p3 + p4 + p5;
    int grade;

    if (points <= 50) {
        cout << "Predmetot ne e polozen" << endl;
    }
    else {
        if (points <= 60) {
            grade = 6;
        }
        else if (points <= 70) {
            grade = 7;
        }
        else if (points <= 80) {
            grade = 8;
        }
        else if (points <= 90) {
            grade = 9;
        }
        else {
            grade = 10;
        }

        cout << "Ocenka: " << grade
             << ", poeni: " << points << endl;
        
        if(points < 100){
            if (points == 60 || points == 70 ||
                points == 80 || points == 90) {
                cout << "Ima uslov za povisoka ocenka";
            }
            else{
                cout << "Nema uslov za povisoka ocenka";
            }
        }
    }

    return 0;
}
