#include <iostream>
#include <iomanip>
using namespace std;
int main() {
double matrix[100][100];
int m,n;
cin>>m>>n;
for (int i=0;i<m;i++){
    for (int j=0;j<n;j++){
        cin>>matrix[i][j];
    }
}
for (int j=0;j<n;j++){
    double min,max;
    min=max=matrix[0][j];
    for(int i=0;i<m;i++){
        if (matrix[i][j]<min){
            min=matrix[i][j];
        }
       if (matrix[i][j]>max){
           max=matrix[i][j];
       }
    }
    for (int i=0;i<m;i++){
        matrix[i][j]=(matrix[i][j]-min)/(max-min);
    }
}
for (int i=0;i<m;i++){
    for (int j=0;j<n;j++){
        cout<<fixed<<setprecision(2)<<matrix[i][j]<<" ";
    }
    cout<<endl;
}
    return 0;
}

