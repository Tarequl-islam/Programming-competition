#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m, rem;
    cin>>n>>m;
    while(1){
        rem=n%m;
        if(rem==0) break;
        m=n;
        n=rem;
    }
    cout<<m<<endl;
    return 0;
}

