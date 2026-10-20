#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
// a = 97, z = 122
void transform(char arr[], int pomestuvanja, int i){
    int length = strlen(arr);
    if(i==length)
        return;
    if(isalpha(arr[i])){
        if (arr[i] + pomestuvanja > 'z') {
            arr[i] = 'a' + (arr[i] + pomestuvanja - 'z' - 1);
        } else if (arr[i] + pomestuvanja > 'Z' && arr[i] <= 'Z') {
            arr[i] = 'A' + (arr[i] + pomestuvanja - 'Z' - 1);
        } else {
            arr[i] = arr[i] + pomestuvanja;
        }
        return transform(arr, pomestuvanja, ++i);
    }
    else
        return transform(arr, pomestuvanja, ++i);

}
int main() {
    int n;
    cin >> n;
    int x;
    cin>>x;
    cin.get();
    char str[81];
    for(int i = 0; i<n; i++){
        cin.getline(str, 81);
        transform(str, x, 0);
        cout<<str<<endl;

    }

}

