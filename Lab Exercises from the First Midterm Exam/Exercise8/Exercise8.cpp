#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int hypotenuseSquared = a * a + b * b;
    float area = (a * b) / 2.0;

    cout << hypotenuseSquared << endl;
    cout << area << endl;

    return 0;
}
