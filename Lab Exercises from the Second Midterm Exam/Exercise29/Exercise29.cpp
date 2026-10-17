#include <iostream>
using namespace std;
int main(){
    int n,k,niza[100];
    cin>>n;
    cin>>k;
    int brojac=0;
    for (int i=0;i<n;i++){
        cin>>niza[i];
    }
    for (int i=0;i<n;i++){
        if(niza[i]==k){
            brojac++;
        }
    }
    for (int i=0;i<n;i++){
        cout<<niza[i]<<" ";
    }
    cout<<endl;
    cout<<"Brojot "<<k<<" vo nizata se naogja "<<brojac<<" pati.";
    return 0;
}
