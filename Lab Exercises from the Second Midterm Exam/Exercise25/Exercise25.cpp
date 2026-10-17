#include <iostream>
using namespace std;

void transform(int *arr, int n){
    int max = 0, min = 0, first = 1;
    for (int i = 0; i < n; i++){
        if (first){
            min = max = arr[i];
            first = 0;
        }
        if (arr[i] > max){
            max = arr[i];
        }
        if (arr[i] < min){
            min = arr[i];
        }
    }
    int difference = max - min;
    for (int i = 0; i < n; i++){
        if (arr[i] == max){
            arr[i] = min;
        }
        else if (arr[i] == min){
            arr[i] = max;
        }
        else{
            arr[i] += difference;
        }
    }
}
using namespace std;
int main() {
    int array[100], n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }
    transform(array, n);
    for (int i = 0; i < n; i++){
        cout << array[i] << " ";
    }
    return 0;
}
