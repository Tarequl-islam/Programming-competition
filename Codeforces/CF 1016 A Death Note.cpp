#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n, m, ar, t,l, temp=0;
    queue<int> v;
    cin>>n>>m;
    l=n;
    while(n--){
        cin>>ar;
        v.push(ar);
    }
    while(l--){
        t = v.front();
        cout<<(temp+t)/m<<" ";
        temp = (temp+t)%m;
        v.pop();
    }
    return 0;
}
