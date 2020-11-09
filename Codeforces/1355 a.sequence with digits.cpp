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
    // freopen("input.txt", "r", stdin); start- -end 11.47 am
    // freopen("output.txt", "w", stdout);
    int t, cs = 1;
    cin >> t;
    while (t--){
        ll n, x, a, b, c, d, i, j=0,k, mx = 0, mn = 1e16;
        cin>>a>>k;
        for ( i = 1; i < k; i++){
            mx = 0; mn = 10;
            b = a;
            while(b>0){
                j = b%10;
                b/= 10;
                mx = max(mx, j);
                mn = min(mn, j);
            }
            c = mx*mn;
            if(c==0) break;
            a+=c;
        }
        cout<<a<<endl;
    }
    return 0;
}
