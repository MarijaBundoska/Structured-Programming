#include <iostream>
using namespace std;
int main(){
    int n;
    int br=0;
    int niza[100];
    while(cin>>n){
        if(n==-1){
            break;
        }
        niza[br++]=n;
    }
    int l,r,v,I;
    for(int s=0;s<3;s++){
        cin>>l>>r>>v>>I;
        if(I==0){
            for(int i=l;i<=r;i++){
                niza[i]+=v;
            }
        }else if(I==1){
            for(int i=l+1;i<r;i++){
                niza[i]+=v;
            }
        }
    }
    for(int i=0;i<br;i++){
        cout<<niza[i]<<" ";
    }
    return 0;
}
