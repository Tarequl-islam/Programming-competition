#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, m, a, b=1, c, mx=0;
    queue<int> q;
    int arr[102];
    cin>>n>>m;
    for (int i = 1; i <= n; i++){
        cin>>arr[i];
        if(arr[i]>=mx){
            mx = arr[i];
        }
    }
    c=n;
    while (1){
        if (mx<=m*b){
            break;
        }
        for (int i = 1; i <= n; i++){
            if (arr[i] > m * b){
                c = i;
            }
        }
        b++;
    }
    cout<<c<<endl;
    return 0;
}
