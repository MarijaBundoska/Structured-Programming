#include <iostream>
using namespace std;

void transform(int *p, int n){
    int i, *previous = p;
    p++;
    for (i = 1; i < n; i++){
        *(p++) += *previous++;
    }
}

void printArray(int *p, int n){
    for (int i = 0; i < n; i++){
        cout << *(p++) << " ";
    }
    cout << endl;
}

int main(){
    int *array, n;
    cin >> n;
    array = new int[n];

    for (int i = 0; i < n; i++){
        cin >> array[i];
    }

    cout << "Vnesenata niza e:" << endl;
    printArray(array, n);

    cout << "Novata niza e:" << endl;
    transform(array, n);
    printArray(array, n);

    delete[] array;
    return 0;
}
