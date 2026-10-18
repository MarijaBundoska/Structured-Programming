#include <iostream>
#include <string>
using namespace std;

int main() {
    int x, n;
    if (!(cin >> x >> n)) {
        return 0;
    }

    string strX = to_string(x);
    bool foundAny = false;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        string strNum = to_string(num);

        if (strNum.find(strX) != string::npos) {
            cout << num << endl;
            foundAny = true;
        }
    }

  
    if (!foundAny) {
        cout << "Nema" << endl;
    }

    return 0;
}
