#include <iostream>
using namespace std;

int transform(int number){
    if (number==0){
        return 0;
    }
    int digit=number%10;
    if (digit%2==0){
        digit=0;
    }
    else{
        digit--;
    }
    return transform(number/10)*10+digit;
}
int main(){
    int number;
    cin>>number;
    cout<<"Brojot e "<<transform(number);
    return 0;
}
