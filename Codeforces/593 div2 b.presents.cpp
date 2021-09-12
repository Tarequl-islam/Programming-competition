#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
ll mod = 1000000007;
ll bigmod(ll a, ll b){ 
    if(b==0) return 1;
    ll ans = bigmod(a, b / 2)%mod;
    ans = ((ans % mod) * (ans %mod)) % mod;
    if(b%2==0) return ans;
    else return (ans*a)%mod; 
}
int main(){
    ll n, m, ans; 
    cin>>n>>m;
    ans=bigmod(2, m)-1;
    cout<<bigmod(ans, n)<<"\n";
    return 0;
}

