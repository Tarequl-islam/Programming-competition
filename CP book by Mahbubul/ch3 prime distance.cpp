#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> primes;
bitset<2150000000> bs;
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
    sieve(2150000000);
    ll L, U;
    while(scanf("%d %d" , &L, &U) != EOF){
        ll l, dist=0, clos=100000, DP, CP;
        //cin>>L>>U;
        l=L;
        while(!bs[l]) l++;
        vector<ll>:: iterator it = find(primes.begin(), primes.end(), l);
        if((l+1)>=U){
            cout<<"There are no adjacent primes."<<endl;
            continue;
        }
        for(ll i = distance(primes.begin(), it); primes[i]<=U; i++){
            if((primes[i+1]-primes[i])>dist){
                dist= primes[i+1]-primes[i];
                DP=i;
            }
            if((primes[i+1]-primes[i])<clos){
                clos = primes[i+1]-primes[i];
                CP=i;
            }
        }
        cout<<primes[CP]<<","<<primes[CP+1]<<" are closest, ";
        cout<<primes[DP]<<","<<primes[DP+1]<<" are most distant.\n";
    }
}

