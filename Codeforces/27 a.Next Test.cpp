#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, a, b, c, cnt=0;
    int arr[3003];
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    if (arr[0]!=1){
        cout<<1<<endl;
        return 0;
    }
    for (int i = 0; i < n; i++){
        if(arr[i]+1 != arr[i+1]){
            cout<<arr[i]+1<<endl;
            return 0;
        }

    }
    cout<<arr[n]+1<<endl;
    return 0;
}
