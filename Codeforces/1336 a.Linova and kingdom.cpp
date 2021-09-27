#include<bits/stdc++.h>
using namespace std;
#define fo(i, n) for (int i = 0; i < n; i++)
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

const int MX = 2e5 + 5;
int n, k, u, v, t;
vi e[MX];
int nC[MX];
vi a;
void dfs(int v, int p, int l){
    nC[v] = -t - l;
    t++;
    for(auto u: e[v]){
        if (u != p)
            dfs(u, v, l + 1);
    }
    nC[v] += t;
    a.pb(nC[v] - 1);
}
int main(){
    cin >> n >> k;
    fo(i, n - 1){
        cin >> u >> v;
        e[u].pb(v);
        e[v].pb(u);
    }
    dfs(1, 0, 0);
    sort(a.begin(), a.end(), greater<int>());
    ll ans = 0;
    fo(i, n - k)
        ans += a[i];
    cout << ans << endl;
    return 0;
}