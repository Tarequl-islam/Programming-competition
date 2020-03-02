#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll BigMod(ll base, ll pow, ll modvalue){
    if (pow == 0) return 1;
    ll ans = BigMod(base, pow / 2, modvalue);
    ll total = ((ans % modvalue) * (ans % modvalue)) % modvalue;
    if(pow % 2 == 0)
        return total;
    else{
        return (total * (base % modvalue) ) % modvalue;
    }
}
int main(){
    ll A, B, M, N;
    string s;
    while(scanf("%lld %lld %lld", &A, &B, &M) == 3){
        cout<<BigMod(A,B,M)<<endl;
    }
    return 0;
}
