#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n, a, b;
        string x;
        cin>>n;
        if(n%2==1) x="7";
        else x="1";
        a=(n/2)-1;
        while(a--){
            x=x+"1";
        }
        cout<<x<<endl;
    }
    return 0;
}
