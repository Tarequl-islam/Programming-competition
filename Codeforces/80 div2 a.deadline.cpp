#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t){
        ll n, d,x;
        cin>>n>>d;
        x=sqrt(d);
        if(n>=d) cout<<"YES"<<endl;
        else if((d+x-1)/x +(x-1) <= n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        t--;
    }
    return 0;
}
