#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, mi=100000, ma=0, countt=0, i;
    int arr[10000];
    cin >>n;
    for (i = 1; i <= n; i++){
        cin>>arr[i];
    }
    mi = ma = arr[1];
    for (i = 2; i <= n; i++){
        if(arr[i]>ma){
            ma = arr[i];
            countt++;
        }
        else if(arr[i]<mi){
            mi = arr[i];
            countt++;
        }
    }
    cout<<countt<<endl;
    return 0;
}
