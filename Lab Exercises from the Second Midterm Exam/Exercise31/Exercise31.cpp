#include <iostream>
#include <iomanip>
using namespace std;

void scale(float *arr, int n){
    int max = 0, min = 0;
    float quotient = 0;
    for(int i = 0; i < n; i++){
        if(i == 0){
            max = min = arr[i];
        }
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    quotient = 100.00 / max;
    float difference = 100 - max;
    for(int i = 0; i < n; i++){
        if(arr[i] == max){
            arr[i] += difference;
        }else{
            arr[i] *= quotient;
        }
    }
}

int main(){
    int n;
    cin >> n;
    float array[100];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    scale(array, n);
    for(int i = 0; i < n; i++){
        cout << fixed << setprecision(2) << array[i] << " ";
    }
    return 0;
}
