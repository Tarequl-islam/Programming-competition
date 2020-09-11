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
            for(ll j= i*i; j<n; j+=i) bs[j]=0;
            primes.push_back(i);
        }
    }
}
int main(){
    ll t, n, m, i, lim, tem=0;
    cin>>n>>m;
    sieve(50);
    for (i = 0; i < 15; i++){
        if(primes[i]==n) break;
        //cout << primes[i] << " ";
    }
    if (primes[i+1]==m)
        cout<<"YES\n";
    else 
        cout<<"NO\n";
}
