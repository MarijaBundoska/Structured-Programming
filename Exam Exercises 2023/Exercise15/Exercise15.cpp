#include <iostream>
using namespace std;

int transformNumber(int number){
    if(number < 10){
        if(number % 10 == 9){
            return 7;
        }
        else{
            return number;
        }
    }

    int result = transformNumber(number / 10);

    if(number % 10 == 9){
        return result * 10 + 7;
    }
    else{
        return result * 10 + number % 10;
    }
}

void sortArray(int array[], int size){
    bool swapped = true;

    while(swapped){
        swapped = false;

        for(int i = 0; i < size - 1; i++){
            if(array[i] > array[i + 1]){
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swapped = true;
            }
        }
    }
}

int main() {
    int numbers[100], number, count = 0, i;

    while(cin >> number){
        numbers[count] = transformNumber(number);
        count++;
    }

    sortArray(numbers, count);

    if(count > 5){
        count = 5;
    }

    for(int i = 0; i < count; i++){
        cout << numbers[i] << " ";
    }

    return 0;
}
