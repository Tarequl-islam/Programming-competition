#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n>1) return n*fact(n-1);
    else return 1;
}

int main(){
    int n, itm, i, j, mx;
    cin>>n;
    int ans =  fact(n);
    cout<<ans<<endl;
    return 0;
}
