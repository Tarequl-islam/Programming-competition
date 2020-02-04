#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b){
    if(!b) return a;
    return GCD(b, a%b);
}
int main(){
    int a,b,m;
    cin>>a>>b;
    m= GCD(a,b);
    cout<<m<<endl;
    return 0;
}

