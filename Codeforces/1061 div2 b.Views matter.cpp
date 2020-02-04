#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n, m, max=0, ans=0, top;
    cin>>n>>m;
    ll a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a, a+n);
    for(int i=0; i<n; i++){
        if(a[i]>max){
            max++;
            top=a[i];
        }
        ans+=a[i]-1;
    }
    if(max<top)ans-=top-max;
    cout<<ans<<"\n";
    return 0;
}
