#include <iostream>
using namespace std;

void sort(int *x, int *y, int *a){
    if(*x < *y){
        swap(*x, *y);
    }
    if(*x < *a){
        swap(*x, *a);
    }
    if(*y < *a){
        swap(*y, *a);
    }
}

int main(){
    int k1, k2, k3;
    cin>>k1>>k2>>k3;
    sort(&k1,&k2,&k3);
    cout<<k1<<" "<<k2<<" "<<k3<<endl;
    return 0;
}
