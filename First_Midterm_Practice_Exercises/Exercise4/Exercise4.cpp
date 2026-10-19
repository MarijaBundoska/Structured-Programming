#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char character;
    int number = 0, sum = 0;

    for (cin >> noskipws >> character; character != '!'; cin >> noskipws >> character)
        (isdigit(character)) ? number = number * 10 + (character - '0') : (sum += number, number = 0);

    sum += number;
    cout << sum;

    return 0;
}
