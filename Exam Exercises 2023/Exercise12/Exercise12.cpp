#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int countPositive(int array[], int n){
    if(n == 0 && array[n] > 0)
        return 1;
    else if(n == 0 && array[n] <= 0)
        return 0;

    if(array[n] > 0)
        return 1 + countPositive(array, --n);

    return countPositive(array, --n);
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int count = countPositive(arr, --n);

    cout << count;
}
