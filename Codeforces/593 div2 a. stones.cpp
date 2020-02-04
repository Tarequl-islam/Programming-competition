#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t, a, b, c;
    cin>>t;
    for(int i=0;i<t; i++){
        ll temp=0;
        cin>>a>>b>>c;
        temp=min(b, c/2);
        b-=temp;
        c-=temp*2;
        temp+=min(a, b/2);
        cout<<temp*3<<"\n";
    }
    return 0;
}
