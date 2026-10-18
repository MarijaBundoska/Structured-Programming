#include <iostream>
using namespace std;

int main() {
    float radius;
    const float PI = 3.14;

    cin >> radius;

    float perimeter = 2 * PI * radius;
    float area = PI * radius * radius;

    cout << "Perimetar: " << perimeter << endl;
    cout << "Plostina: " << area << endl;

    return 0;
}
