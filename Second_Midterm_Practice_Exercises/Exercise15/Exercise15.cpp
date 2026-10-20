#include <iostream>
using namespace std;
int poramnet(int br){
    if(br<10){
        if(br%10==9){
            return 7;
        }
        else{
            return br;
        }
    }
    int sum=poramnet(br/10);
    if(br%10==9){
        return sum*10+7;
    }
    else{
        return sum*10+br%10;
    }
}
void sort(int arr[],int size){
    bool swapped=true;
    while(swapped){
        swapped=false;
        for (int i=0;i<size-1;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                swapped=true;
            }
        }
    }
}
int main() {
    int niza[100], n,count=0,i;
    while(cin>>n){
        niza[count]=poramnet(n);
        count++;
    }
    sort(niza,count);
    if(count>5){
        count=5;
    }

    for (int i=0;i<count;i++){
        cout<<niza[i]<<" ";
    }
    return 0;
}
