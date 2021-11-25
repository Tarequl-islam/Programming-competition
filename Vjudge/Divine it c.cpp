#include<bits/stdc++.h>
using namespace std;
#define fo(i, n) for (i = 0; i < n; i++)
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define ll long long
int main(){ 
    int t=1, cs = 1;
    cin >> t;
    while (t--){
        ll p, q, z, n, marble, x, y;
        cin>>p>>q>>z>>n;
        marble = 0;
        while (n--){
            cin>>x>>y;
            if ((2 * x - p) * (2 * x - p) + (2 * y - q) * (2 * y - q) <= p * p + q * q - 4 * z){
                marble++;
            }
        }
        cout<<marble<<endl;
    }
    return 0;
}
