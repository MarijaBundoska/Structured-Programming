#include <iostream>
using namespace std;
int main() {
    int niza[100];
    int n=0,broj;
  while(cin>>broj){
      niza[n++]=broj;

  for (int i=0;i<n-1;i++){
      for (int j=0;j<n;j++){
          if (niza[i]==niza[j]){
              niza[j]+=(j-i);
          }
      }
  }
  }
  for (int i=0;i<n;i++){
      cout<<niza[i]<<" ";
  }
    return 0;
}
