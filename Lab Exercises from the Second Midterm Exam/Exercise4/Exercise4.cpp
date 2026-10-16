#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void bubblesort(int arr[],int size){
    for (int i=0;i<size;i++){
        for (int j=0;j<size-i-1;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void readingarray(int arr[],int elements){
    for (int i=0;i<elements;i++){
        cout<<arr[i]<<" ";
    }
}
void insertarray(int a[], int siz){
    for (int i=0;i<siz;i++){
        cin>>a[i];
    }
}
int main() {
    int M,N,arraym[100],arrayn[100],arrayz[200];
    cin>>M;
    insertarray(arraym,M);
    cin>>N;
    insertarray(arrayn,N);
    int rez=M+N;
for (int i=0;i<M;i++){
    arrayz[i]=arraym[i];
}
for (int i=0;i<N;i++){
    arrayz[M+i]=arrayn[i];
}
    bubblesort(arrayz,rez);
    readingarray(arrayz,rez);
    return 0;
}
