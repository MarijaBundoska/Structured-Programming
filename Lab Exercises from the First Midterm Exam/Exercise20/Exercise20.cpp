#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int n1, n2, n3;
    cin>> n1 >> n2 >> n3;

    if((n1 == n2 && n2 == n3 && n1 == n3) || (n1 != n2 && n2 != n3 && n1 != n3)){
        cout<<"1";
    }else{
        cout<<"0";
    }
    return 0;
}
