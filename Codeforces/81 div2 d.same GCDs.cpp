#include<bits/stdc++.h>
#define ll long long
using namespace std;

int GCD(int a, int b){
    if(!b) return a;
    return GCD(b, a%b);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,x=0,y=0,res=0;
        cin>>a>>b;
        while(x<b){
            if(y==0) y=GCD(a,b);
            if(y==GCD(a+x,b)) res++;
            x++;
        }
        cout<<res<<endl;
    }
    return 0;
}

