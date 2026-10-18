#include <iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    int temp=a;
    int evenSum=0, oddSum=0;

   while(a>0){
       evenSum+=a%10;
       a/=100;
   }

   while(temp>0){
       oddSum+=temp%100/10;
       temp/=100;
   }

   cout<<"Sumata na cifrite na parnite pozicii e "<<evenSum<<endl;
   cout<<"Sumata na cifrite na neparnite pozicii e "<<oddSum<<endl;

    return 0;
}
