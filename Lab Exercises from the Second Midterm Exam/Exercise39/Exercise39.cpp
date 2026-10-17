#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int maxSum=arr[0], currentSum=0;
    int start=0, end=0, tempStart=0;

    for(int i=0;i<n;i++){
        currentSum+=arr[i];

    if(currentSum > maxSum){
        maxSum=currentSum;
        start=tempStart;
        end=i;
    }
    if(currentSum < 0){
        currentSum=0;
        tempStart=i+1;
    }
}
    int subarrayLenght= end - start+1;
    double percentage= (subarrayLenght *100.0)/n;

    cout<<"Maximum Sum: "<<maxSum<<endl;
    cout<<"Percentage of Elements Used: "<<percentage<<endl;

    return 0;
}
