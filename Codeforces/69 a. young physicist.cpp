#include<bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt", "r", stdin);
    //while(!EOF){
        int n, a[100], b[100], c[100], as=0, bs=0, cs=0;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a[i]>>b[i]>>c[i];
            as+=a[i];
            bs+=b[i];
            cs+=c[i];
        }
        if((as==0) && (bs==0) && (cs==0)) cout<<"YES\n";
        else cout<<"NO\n";
    //}
    return 0;
