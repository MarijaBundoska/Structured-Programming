#include <iostream>
using namespace std;

int isPrime(int number){
    if(number<=1){
        return 0;
    }
    if(number==2 || number==3){
        return 1;
    }
    if(number%2==0){
        return 0;
    }
    for(int i=3;i*i<=number;i+=2){
        if(number%i==0){
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    cin >> n;
    int newNumber;
    int array[100];

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    for (int i = 0; i < n - 1; i += 2) {
        newNumber = array[i] * 10 + array[i + 1];

        if (isPrime(newNumber)) {
            cout << "brojot " << newNumber << " e prost" << endl;
        } else {
            cout << "brojot " << newNumber << " NE e prost" << endl;
        }
    }

    if (n % 2 != 0) {
        if (isPrime(array[n - 1])) {
            cout << "brojot " << array[n - 1] << " e prost" << endl;
        } else {
            cout << "brojot " << array[n - 1] << " NE e prost " << endl;
        }
    }

    return 0;
}
