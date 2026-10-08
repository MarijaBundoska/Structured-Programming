#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char z1, z2;
    char sequence[80];
    int position1, position2;
    int found1 = 0, found2 = 0;
    int printed = 0;

    cin >> z1 >> z2;

    while(cin.getline(sequence, 80)){
        if(sequence[0] == '#'){
            break;
        }

        for(int i = 0; i < strlen(sequence); i++){
            if(sequence[i] == z1){
                position1 = i;
                found1 = 1;
            }
            else if(sequence[i] == z2 && found1){
                position2 = i;
                found2 = 1;
            }
        }

        if(found1 && found2){
            for(int i = position1 + 1; i < position2; i++){
                cout << sequence[i];
                printed = 1;
            }
        }

        if(printed){
            cout << endl;
        }
    }

    return 0;
}
