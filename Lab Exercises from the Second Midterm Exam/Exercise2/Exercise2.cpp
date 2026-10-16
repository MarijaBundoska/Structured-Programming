#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void bubblesort(int array[],int size){
    for (int i=0;i<size;i++){
    for (int j=0;j<size-1-i;j++){
                if(array[j]>array[j+1]){
            swap(array[j],array[j+1]);
        }
    }
}
}
int main() {
    int my[100],m;
    cin>>m;
    int k;
    cin>>k;
    for (int i=0;i<m;i++){
        cin>>my[i];
    }
    bubblesort(my,m);
    
    cout<<k<<"-te najmali elementi se: ";
    for (int i=0;i<k;i++){
        cout<<my[i]<<" ";
    }

    return 0;
}
