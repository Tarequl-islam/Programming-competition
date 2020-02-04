#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    while(1){
    int a, b,c;
    cin>>a>>b>>c;
    if(a>b && b<=c) cout<<":)"<<endl;
    else if(a<b && c>=(b-a)) cout<<":)"<<endl;
    else if(a>b && (b-c)<(a-b)) cout<<":)"<<endl;
    else if(a==b && b<c) cout<<":)"<<endl;
    else cout<<":("<<endl;
    }
    return 0;
}

