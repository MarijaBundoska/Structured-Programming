#include <iostream>
using namespace std;
int main(){
int array[100],n;
cin>>n;
for (int i=0;i<n;i++){
    cin>>array[i];
}
for (int i=0;i<n;i++){
    if(i%2!=0){
        array[i]+=2;
    }
    else{
        array[i]*=2;
    }
}
for (int i=0;i<n;i++){
    cout<<array[i]<<" ";
}
    return 0;
}
