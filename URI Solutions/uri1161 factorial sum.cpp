#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll fact(ll n) {
   if ((n==0)||(n==1))
      return 1;
   else
      return n*fact(n-1);
}
int main(){
    ll a, b;
    while(scanf("%lld %lld",&a,&b) != EOF)
    {
        cout<<fact(a)+fact(b)<<endl;
    }
    return 0;
}

