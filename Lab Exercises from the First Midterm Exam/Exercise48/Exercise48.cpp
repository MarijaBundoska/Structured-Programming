#include <iostream>
using namespace std;
int main(){
    int a,b,max=0,min=-1,temp,i,ob,novtemp;
    cin>>a>>b;
    for ( i=a;i<=b;i++) {
        temp = i;
        ob = 0;
        while (temp > 0) {
            novtemp = temp % 10;
            ob = ob * 10 + novtemp;
            temp /= 10;
        }
        if (ob == i) {
            if (ob > max) {
                max = ob;
            }if (min==-1) {
                min = ob;
            }
        }
    }
    cout<<"Smallest Palindromic Number: "<<min<<endl;
    cout<<"Largest Palindromic Number: "<<max<<endl;
    return 0;
}
