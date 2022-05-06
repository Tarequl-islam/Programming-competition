#include<bits/stdc++.h>
using namespace std;
#define fo(i, n) for (i = 0; i < n; i++)
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define ll long long
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)


int main(){ //s: 0.0 am - e: 0.00am;
    int t=1, cs = 1;
    cin >> t;
    while (t--){
        int n, m, a, b, c, i, j, k, mx = 0, mn = 1e8;
        int ar[100005];
        cin>>n;
        for (i = 0; i < n; i++){
            si(ar[i]);
        }
        sort(ar, ar + n, greater<int>());
        int ans = min(ar[0], n);
        mn = min(ar[0], n);
        for (i = 0; i < n; i++){
            if (ar[i] < mn){
                ans -= mn-ar[i];
                mn = ar[i];
            }
            mn--;
        }
        cout<<"Case #"<<cs++<<": "<<ans<<" "<<endl;
    }
    return 0;
}
