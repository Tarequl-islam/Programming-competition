#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n, r, value;
    vector<ll> a;
    string binary, ibinary, jbinary;
    cin>>n;
    for(ll i=0; i<n; i++) {
        cin>>r;
        a.push_back(r);
    }
    ibinary = bitset<64>(0).to_string();
    bitset<64> foo (ibinary);
    for(ll i=0; i<n; i++){
        for(ll j=i+1; j<n; j++){
            jbinary = bitset<64>(a[i]+a[j]).to_string();
            bitset<64> bar (jbinary);
            binary = (foo^=bar).to_string();
            bitset<64> foo (binary);
        }
    }
    value = bitset<64>(binary).to_ullong();
    cout<<value<<endl;
    return 0;
}
