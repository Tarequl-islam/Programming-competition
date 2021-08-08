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
ll GCD(ll a, ll b) { return (a % b) == 0 ? b : GCD(b, a % b); }
ll mod(ll x) { return ((x % M + M) % M); }
bool cmp(const pii &left, const pii &right){
    return left.first > right.first || (left.first == right.first && left.second < right.second); }
//int find(int x) { return (p[x] == x ? x : p[x] = find(p[x])); } //p[find(i)]=find(j);
const int MAXN = 100000;
 
int n;
int a[MAXN];
int pos[MAXN];
bool solve() {
	fo(i, n) pos[a[i]] = i;
	int at = 0;
	while (at < n) {
		int idx = pos[at];
		int cnt = n - idx - at;
		fo(i, cnt - 1) if (a[idx + i + 1] != a[idx + i] + 1) return false;
		at += cnt;
	}
	return true;
}
 
void run() {
	scanf("%d", &n);
	fo(i, n) scanf("%d", &a[i]), --a[i];
	printf("%s\n", solve() ? "Yes" : "No");
}
 
int main() {
	int ncase; scanf("%d", &ncase); FOR(i, 0, ncase) run();
	return 0;
}