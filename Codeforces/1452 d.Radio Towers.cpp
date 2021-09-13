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
const int MOD = 998244353;
const int MAXN = 10 * 1000 * 1000 + 10, MAXV = 4;
ll GCD(ll a, ll b) { return (a % b) == 0 ? b : GCD(b, a % b); }
ll mod(ll x) { return ((x % M + M) % M); }
bool cmp(const pii &left, const pii &right){
    return left.first > right.first || (left.first == right.first && left.second < right.second); }
//int find(int x) { return (p[x] == x ? x : p[x] = find(p[x])); } //p[find(i)]=find(j);
ll bigmod(ll a, ll b){
    if(b==0) return 1;
    ll ans = bigmod(a, b/2);
    ans = (ans*ans)%MOD;
    if(b&1) ans = (ans*a)%MOD;
    return ans;
}
ll n, x[202020], y[202020];
int main() {
	x[1] = 1;
	x[2] = 1;
	y[1] = 2;
	for (int i = 2; i < 202020; i++) {
		y[i] = y[i - 1] * 2;
		y[i] %= MOD;
	}
	for (int i = 3; i < 202020; i++) {
		x[i] = x[i - 1] + x[i - 2];
		x[i] %= MOD;
	}
	cin >> n;
	cout << (x[n] * bigmod(y[n], MOD - 2)) % MOD;
	return 0;
}