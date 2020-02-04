#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    for(ll i=0; i<t; i++){
        ll a, b, x;
        cin>>a>>b;
        if(a==b){
                cout<<"NO\n";
                continue;
            }
        while(true){
            if(a<b){
                x=b/2;
                a-=x;
                b-=(2*x);
            }
            else if(a>b){
                x=a/2;
                a-=(2*x);
                b-=x;
            }
            if(a==0 && b==0) {
                cout<<"YES\n";
                break;
            }
            else if(a==0 || b==0) {
                cout<<"NO\n";
                break;
            }
            else if(a==b){
                cout<<"NO\n";
                break;
            }
        }

    }
    return 0;
}
