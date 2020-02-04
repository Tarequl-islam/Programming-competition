#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
int main(){
    ll n, m, ans;
    cin>>n>>m;
    ans=pow((pow(2, m)-1), n);
    cout<<ans%1000000007<<"\n";
    return 0;
}

