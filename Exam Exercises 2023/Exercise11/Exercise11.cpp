#include <iostream>
#include <cstring>
using namespace std;

void bubbleSort(char array[], int size){
    bool isSwapped = true;

    while(isSwapped){
        isSwapped = false;

        for(int i = 0; i < size - 1; i++){
            if(array[i] > array[i + 1]){
                swap(array[i], array[i + 1]);
                isSwapped = true;
            }
        }
    }
}

int main(){
    char sequence[101];
    char digits[101];
    int count, index;

    while(cin.getline(sequence, 101)){
        if(strcmp(sequence, "#") == 0){
            break;
        }

        count = index = 0;

        for(int i = 0; i < strlen(sequence); i++){
            if(sequence[i] >= '0' && sequence[i] <= '9'){
                count++;
                digits[index] = sequence[i];
                index++;
            }
        }

        cout << count << ":";

        bubbleSort(digits, index);

        for(int i = 0; i < index; i++){
            cout << digits[i];
        }

        cout << endl;
    }

    return 0;
}
