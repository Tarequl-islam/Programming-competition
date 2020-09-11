#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, mi=100000, ma=0, countt=0, i;
    int arr[10000], brr[10000];
    cin >>n;
    for (i = 1; i <= n; i++){
        cin>>arr[i]>>brr[i];
    }
    countt= arr[1]+brr[1];
    for (i = 2; i <= n; i++){
        if(ma<countt) ma = countt;
        countt-=arr[i];
        countt+=brr[i];
    }
    cout<<ma<<endl;
    return 0;
}
