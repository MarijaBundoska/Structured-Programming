#include <iostream>
#include <cmath>
using namespace std;
void stosenbroj(int matrica[100][100],int row, int col){
    int i,j;
    for (i=0;i<row;i++){
        int stosen=0;
        for (j=0;j<col;j++){
            if ((matrica[i][j]%2==(i+j)%2)){
                stosen++;
            }
        }cout<<i<<": "<<stosen<<endl;
    }
}
int main() {
    int matrix[100][100],n,m;
    cin>>n>>m;
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    stosenbroj(matrix,n,m);
    return 0;
}
