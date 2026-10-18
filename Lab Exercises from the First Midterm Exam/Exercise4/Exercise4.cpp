#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int average = (a + b) / 2;
    int first = a + average;
    int second = b - average;
    cout << "Razlikata e: " << first - second << endl;
    return 0;
}
