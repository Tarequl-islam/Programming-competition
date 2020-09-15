#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, m, a, b, c, cnt=0;
    int ar[1005];
    cin>>n;
    if (n==1){
        cout<<1<<endl;
        return 0;
    }
    cout<<n;
    for (int i = 1; i < n; i++){
        cout<<" "<<i;
    }
    cout<<endl;
    return 0;
}
