#include<bits/stdc++.h>
#define ll long long
using namespace std;


int Power(ll a, ll b, ll m){
    if(b==1) return a%m;
    if(b&1==1) return (Power(a,b-1,m)*a)%m;
    else{
        ll x = Power(a,b/2,m);
        x=(x*x)%m;
        return x;
    }
}

int main(){
    ll a,b,m,x;
    cin>>a>>b>>m;
    x= Power(a,b,m);
    cout<<x<<endl;
    return 0;
}
