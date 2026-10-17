#include <iostream>
using namespace std;
int devisible(int br, int k){
  return br%k==0;
}
int devisiblenext(int num, int k){
    for (int i=num+1;;i++){
        if(devisible(i,k)){
            return i;
        }
    }
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    for (int i=a;i<=b;i++){
        cout<<i<<" -> "<<devisiblenext(i,c)<<endl;
    }
    return 0;
}


