#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll n, mx=0;
    int l[n];
    int r[n];
    string s;
    //vector<int> l(n);
    //vector<int> r(n);
    cin >> n>>s;
    for(ll i = 0; i < n; ++i){
        mx += s[i]== 'G';
        if(s[i]== 'G'){
            l[i]=1;
            if(i>0) l[i]+=l[i-1];
        }
    }
    for(ll i = n-1; i >=0; --i){
        if(s[i]== 'G'){
            r[i]=1;
            if(i<n-1) r[i]+=r[i+1];
        }
    }
    ll result=0;
    for(ll i = 0; i < n; ++i){
        if(s[i]== 'G') continue;
        ll newresult=1;
        if(i>0) newresult += l[i-1];
        if(i<n-1) newresult += r[i+1];
        result = max(newresult, result);
    }
    result = min(result, mx);
    if(mx==n) result=n;
    cout<<result<<"\n";
    return 0;
}
