#include<bits/stdc++.h>
using namespace std;
#define fo(i, n) for (i = 0; i < n; i++)
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
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
#define CLR(a, b) memset(a, b, sizeof(a))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 2*acos(0.0)
#define M 998244353
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
const int MOD = 1000 * 1000 * 1000 + 7;
const int MAXN = 10 * 1000 * 1000 + 10, MAXV = 4;
ll GCD(ll a, ll b) { return (a % b) == 0 ? b : GCD(b, a % b); }
ll mod(ll x) { return ((x % M + M) % M); }
bool cmp(const pii &left, const pii &right){
    return left.first > right.first || (left.first == right.first && left.second < right.second); }
//int find(int x) { return (p[x] == x ? x : p[x] = find(p[x])); } //p[find(i)]=find(j);


ll mem[1005][2], n;
ll vec[1005][2];
ll dpp(ll idx, ll th){
    if(mem[idx][th]!=0) return mem[idx][th];
    if(idx==n-1) return abs(vec[idx][0] - vec[idx][1]);
    ll aa = dpp(idx+1, 0LL)+abs(vec[idx][th]-vec[idx+1][0]);
    ll bb = dpp(idx+1, 1LL)+abs(vec[idx][th]-vec[idx+1][1]);
    ll ans = min(aa, bb) + abs(vec[idx][0] - vec[idx][1]);
    return mem[idx][th] = ans;
}

int main(){ //s: 0.0 am - e: 0.00am;
    int t=1, cs = 1;
    cin >> t;
    while (t--){
        ll m, a, b, c, i, j, k, mx = 0, mn = 0;
        memset(mem, 0, 1000);
        memset(vec, 0, 1000);
        cin>>n>>m;
        for (i = 0; i < n; i++){
            ll lo = 1e9, hi = 0;
            for(j = 0; j<m; j++){
                sl(a);
                lo = min(lo, a);
                hi = max(hi, a);
            }
            vec[i][0] = lo;
            vec[i][1] = hi;
        }
        mn = min(dpp(0LL, 1LL)+vec[0][0], dpp(0LL, 0LL) + 2*vec[0][1] - vec[0][0]);
        cout<<"Case #"<<cs<<": "<<mn<<endl;
        cs++;
    }
    return 0;
}
