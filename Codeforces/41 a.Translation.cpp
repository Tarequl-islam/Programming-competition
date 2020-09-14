#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, a, b, c, cnt=0;
    string s,t,u;
    cin>>s>>t;
    for (int i = t.length()-1; i>=0; i--){
        u+=t[i];
    }
    if(s==u)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
