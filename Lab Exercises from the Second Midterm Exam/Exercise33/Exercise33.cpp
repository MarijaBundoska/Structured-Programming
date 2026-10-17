#include <iostream>
using namespace std;
#define MAX 100
int main() {
    int array[MAX],i,j,broj,n=0;
    while(cin>>broj){
        array[n++]=broj;
    }
    for ( i=0;i<n-1;i++){
        for (j=i+1;j<n;j++){
            if (array[i]==array[j]){
                array[j]+=(j-i);
            }
        }
    }
    for (int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}
