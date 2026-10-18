#include <iostream>
using namespace std;

int main() {
    float radius;
    const float PI = 3.14;

    cin >> radius;

    float perimeter = 2 * PI * radius;
    float area = PI * radius * radius;

    cout <<	"Perimeter: "<< perimeter << endl;
    cout <<"Area: "<< area << endl;

    return 0;
}
