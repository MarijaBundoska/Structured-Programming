#include <iostream>
#include <string>
using namespace std;

int main() {
    char x;
    string numStr;
    
    if (!(cin >> x >> numStr)) {
        return 0;
    }

    int len = numStr.length();
    
  
    for (int i = 0; i < len; i++) {
       
        int posFromRight = i;
        
        if (posFromRight % 2 == 0) {
            cout << x;
        } else {
            cout << numStr[len - 1 - i];
        }
    }
    cout << endl;

    return 0;
}
