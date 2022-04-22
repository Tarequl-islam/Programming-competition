#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<int> primes;
bitset<1000002> bs;
void sieve(int n){
    bs.set();
    bs[0]=bs[1]=0;
    for(ll i=2; i<n; i++){
        if(bs[i]){
            for(ll j= i*i; j<n; j+=i) 
                bs[j]=0;
            primes.push_back(i);
        }
    }
}
vector<pair<ll, int>> factor(ll x) {    // to findout all prime factors
    vector<pair<ll,int>> pri;
    for (ll i = 2; i*i <= x; ++i) if (x % i == 0) {
        int t = 0;
        while (x % i == 0) x /= i, t ++;
        pri.push_back({i,t});
    }
    if (x > 1) pri.push_back({x,1});
    return pri;
}
int main(){
    ll t, lim, tem=0;
    sieve(1000002);
    while(1){
        cin>>t;
        if(t==0) break;
        for(ll i=1; primes[i]<= t; i++){
            if(bs[t-primes[i]]){
                cout<<t<<" = "<<primes[i]<<" + "<<t-primes[i]<<endl;
                tem=1;
                break;
            }
        }
        if(tem==0) cout<<"Goldbach's conjecture is wrong."<<endl;
    }
}
