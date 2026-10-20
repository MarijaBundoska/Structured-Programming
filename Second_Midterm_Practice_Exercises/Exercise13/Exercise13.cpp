#include <iostream>
using namespace std;
int main(){
    int x,m,n,matrix[100][100],sum=0;
    cin>>x;
    cin>>m>>n;
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    for (int i=0;i<m;i++){
        sum=0;
        for (int j=0;j<n;j++){
            sum+=matrix[i][j];
        }
        if(sum>x){
            for(int s=0;s<n;s++){
                matrix[i][s]=1;
            }
        }
            if(sum<x){
                for (int k=0;k<n;k++){
                    matrix[i][k]=-1;
                }
            }
            if(sum==x){
                for (int m=0;m<n;m++){
                    matrix[i][m]=0;
                }
            }
    }
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
