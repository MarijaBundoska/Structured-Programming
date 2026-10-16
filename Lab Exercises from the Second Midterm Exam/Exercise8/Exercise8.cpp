#include<iostream>
#include <iomanip>
using namespace std;
int main() {
   int N,arr[100][100];
   cin>>N;
   for (int i=0;i<N;i++){
       for (int j=0;j<N;j++){
           cin>>arr[i][j];
       }
   }
   for (int i=0,j=0;i<N;j++,i++){
           if (i==j){
              arr[i][j]*=-1;

       }
   }
   for (int i=0;i<N;i++){
       for (int j=0;j<N;j++){
       cout<<setw(3)<<arr[i][j]<<" ";
       }
       cout<<endl;
   }
        return 0;
}
