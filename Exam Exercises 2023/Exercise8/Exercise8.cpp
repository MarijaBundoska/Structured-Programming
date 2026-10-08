#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main()
{
    char str[101];
    int position1, position2, maxPosition1, maxPosition2;
    char maxStr[101];
    int length, maxLength = 0, count;

    while(cin.getline(str, 101)){
        if (strcmp(str, "0") == 0) {
            break;
        }

        count = position1 = position2 = 0;
        length = (int)strlen(str);
        bool flag = false;

        for(int i = 0; i < strlen(str); i++){
            if(str[i] >= '0' && str[i] <= '9'){
                if(position1 == 0 && !flag) {
                    position1 = i;
                    flag = true;
                }

                count++;

                if(count >= 2)
                    break;
            }
        }

        for(int i = strlen(str) - 1; i >= 0; i--){
            if(str[i] >= '0' && str[i] <= '9'){
                position2 = i;
                break;
            }
        }

        if(length >= maxLength && position2 != 0) {
            maxLength = length;
            maxPosition1 = position1;
            maxPosition2 = position2;
            strcpy(maxStr, str);
        }
    }

    for(int i = maxPosition1; i <= maxPosition2; i++)
        cout << maxStr[i];
}
