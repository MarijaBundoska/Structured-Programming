#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"Vrednosta na broj1 i broj2 pred zamena na broevite e: "<<a<<","<<b<<" a razlikata: "<<a-b<<endl;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"Vrednosta na broj1 i broj2 posle zamena na broevite e: "<<a<<","<<b<<" a razlikata: "<<a-b<<endl;

    return 0;
}
