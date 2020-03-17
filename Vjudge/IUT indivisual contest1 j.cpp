#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll BigMod(ll a, ll b, ll m){
    if(b==1) return a%m;
    if(b&1==1) return (BigMod(a,b-1,m)*a)%m;
    else{
        ll x = BigMod(a,b/2,m);
        x=(x*x)%m;
        return x;
    }
}
int main(){
    //freopen("test.txt", "r", stdin);
    ll A, B, M, N;
    while(scanf("%lld %lld %lld", &A, &B, &M) == 3){
        cout<<BigMod(A,B,M)<<endl;
    }
    return 0;
}

