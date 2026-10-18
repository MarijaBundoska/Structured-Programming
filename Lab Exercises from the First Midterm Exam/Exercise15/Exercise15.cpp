#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if ((b>a && b>c) || (b<a && b<c)){
        cout<<"1"<<endl;
    }
    else {
        cout<<"0";
    }
    return 0;
}
