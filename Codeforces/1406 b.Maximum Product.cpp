#include<bits/stdc++.h>
using namespace std;
#define fo(i, n) for (i = 0; i < n; i++)
#define ll long long
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
bool cmp(const ll &a, const ll &b){
    return abs(a) > abs(b);
}
int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t, cs = 1;
    cin >> t;
    while (t--){
        ll n, m, a, b, c=1, i, j=0,k=0, mx = 0, mn = -1e9;
        ll ar[100005];
        sl(n);
        for ( i = 0; i < n; i++){
            sl(ar[i]);
            mn = max(mn, ar[i]);
        }
        sort(ar, ar+n, cmp);
        if(mn<0){
            cout<<ar[n-1]*ar[n-2]*ar[n-3]*ar[n-4]*ar[n-5]<<endl;
        }
        else{
            mx = ar[0]*ar[1]*ar[2]*ar[3]*ar[4];
            for ( i = 5; i < n; i++){
                for ( j = 0; j < 5; j++){
                    ll tm=ar[i];
                    for ( k = 0; k < 5; k++){
                        if(k!=j) tm*=ar[k];
                    }
                    mx= max(mx, tm);
                }
            }
            cout<<mx<<endl;
        }
    }
    return 0;
}
