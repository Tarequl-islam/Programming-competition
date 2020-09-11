#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll k, l, m, n, d, mi, countt=0, i;
    cin >>k>>l>>m>>n>>d;
    for (i = 1; i <= d; i++){
        if (i%k==0 || i%l==0 || i%m==0 || i%n==0){
            countt++;
        }
    }
    cout<<countt<<endl;
    return 0;
}
