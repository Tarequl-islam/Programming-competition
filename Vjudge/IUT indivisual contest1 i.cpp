#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t, cs=1;
    cin>>t;
    while(t--){
        ll n, x, v[100001];
        cin>>n;
        if(n==0){
            cout<<"Case "<<cs++<<": "<<0<<endl;
            continue;
        }
        if(n==1){
            cin>>x;
            cout<<"Case "<<cs++<<": "<<x<<endl;
            continue;
        }
        v[0]=0;
        cin>>v[1]>>v[2];
        v[2]= max(v[1],v[2]);
        for(int i=3; i<=n; i++){
            cin>>x;
            v[i] = max(x+v[i-2], v[i-1]);
        }
        cout<<"Case "<<cs++<<": "<<v[n]<<endl;
    }
    return 0;
}

