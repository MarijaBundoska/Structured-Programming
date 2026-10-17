#include <iostream>
using namespace std;
int reverseNumber(int number){
    int temp=number, cifra;
    int obr=0;
    while(temp>0){
        cifra=temp%10;
        obr= obr *10+cifra;
        temp/=10;
    }
    return obr;
}
int isPalindrome(int number){
    if(number <0){
        return 0;
    }
    int original=number;
    int reversed=0;

    reversed= reverseNumber(number);
    return original==reversed;
}
int countsDigit(int number){
    if(number==0){
        return 1;
    }
    while(number>0){
        if(number%10==0 || number%10==1 || number%10==2 || number%10==3 || number%10==4){
            return countsDigit(number/10);
        }else{
            return 0;
        }
}
}
int main(){
    int a, b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(isPalindrome(i) && countsDigit(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}
