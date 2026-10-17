#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;

    int matrix[100][100];
    int mat[100][100];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }

    int count=0;

    for(int col1=0;col1<m;col1++){
        for(int col2=0;col2<m;col2++){
            bool same=true;
            for(int row=0;row<n;row++){
                if(matrix[row][col1]!=mat[row][col2]){
                    same=false;
                    break;
                }
            }
            if(same){
                count++;
                break;
            }
        }
    }
    cout<<count;
    return 0;
}
