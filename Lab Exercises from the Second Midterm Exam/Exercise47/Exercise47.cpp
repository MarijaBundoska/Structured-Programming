#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int matrix[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }

    int maxS=0, suma=0, maxInd=0;
    for(int j=0;j<n;j++){
        suma=0;
        for(int i=0;i<n;i++) {
            suma += matrix[i][j];
        }

        if(suma > maxS){
            maxS=suma;
            maxInd=j;
        }
    }
        for(int i=0;i<n;i++){
            matrix[i][maxInd]+=maxS;
        }
    for(int i=0;i<n;i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
