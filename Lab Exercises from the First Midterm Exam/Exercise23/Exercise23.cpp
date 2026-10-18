#include <iostream>
using namespace std;
int main(){
    int p,v,t,c;
    cin>>p>>v>>t>>c;
    int sum1=p+v;
    int sum2=t+c;
    if (sum1%2==0 && sum2%2!=0){
        cout<<"1"<<endl;
    }
    else{
        cout<<"0";
    }

return 0;
}
