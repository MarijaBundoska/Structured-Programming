#include<iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    float n,sum=0;
    float a[100];
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<n;i++){
        sum+=a[i];
    }
    double avg=sum/n;
    double najblizok=a[0];
    double najbliskarazl=abs(a[0]-avg);
for (int i=1;i<n;i++){
   double razlika=abs(a[i]-avg);
       if (razlika<najbliskarazl){
           najblizok=a[i];
           najbliskarazl=razlika;
       }

}
    cout<<fixed<<setprecision(2)<<najblizok<<endl;
    return 0;
}
