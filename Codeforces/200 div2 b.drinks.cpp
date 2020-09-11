#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n, m, mi, ma, i;
    long double per, max=0;
    ll arr[101];
    cin>>n;
    for (i = 1; i <= n; i++){
        cin>>arr[i];
        max += arr[i];
    }
    cout << (max/ (n * 100.00))*100.00 << endl;
    return 0;
}
