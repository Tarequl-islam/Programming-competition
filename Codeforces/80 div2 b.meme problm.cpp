#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t){
        ll a,b, x=0;
        cin>>a>>b;
        b+=1;
        while(b>=10){
            b/=10;
            x++;
        }
        cout<<a*x<<endl;
        t--;
    }
    return 0;
}

