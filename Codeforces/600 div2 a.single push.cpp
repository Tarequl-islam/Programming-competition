#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    for(ll i=0; i<t; i++){
        ll n, l=0, r=0, k;
        bool flag=true;
        cin>>n;
        ll a[n], b[n];
        for(ll j=0; j<n; j++) cin>>a[j];
        for(ll j=0; j<n; j++){
            cin>>b[j];
            if(a[j]!=b[j] && l==0) l=j;
            if(a[j]!=b[j] && l!=0) r=j;
        }
        for(ll j=0; j<n; j++){
            if(a[j]>b[j]) flag=false;
        }
        k= b[l]-a[l];
        for(ll j=l; j<=r; j++) a[j]+=k;
        for(ll j=0; j<n; j++){
            if(a[j]!=b[j]) flag=false;
        }
        if(flag==false) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}
