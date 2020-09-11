#include<bits/stdc++.h>
#define ll long long
using namespace std;
int per[100];
int main(){
    ll t, n, m, i, lim, tem=0;
    cin>>n;
    for (i = 1; i <= n; i++){
        per[i]=i;
    }
    if(n%2==0){
        for (i = 1; i+1 <= n; i+=2){
        swap(per[i], per[i+1]);
        }
        for (i = 1; i <= n; i++){
            cout << per[i] << " ";
        }
    }
    else cout<<"-1";
    cout<<endl;
    return 0;
}
