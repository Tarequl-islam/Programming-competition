#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> primes;
bitset<2150005> bs;
void sieve(ll n){
    bs.set();
    bs[0]=bs[1]=0;
    for(ll i=2; i<=n; i++){
        if(bs[i]){
            for(ll j= i*i; j<n; j+=i) bs[j]=0;
            primes.push_back(i);
        }
    }
}
int main(){
    sieve(2150000);
    int t=1, cs = 1;
    cin >> t;
    while (t--){
        string s;
        ll n, mx=0;
        cin>>s>>n;
        for(int i = 0; i<s.length(); i++){
            ll a = s[i];
            a += n;
            if(bs[a]==1) mx = 1;
        }
        if(mx==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
