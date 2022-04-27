#include<bits/stdc++.h>
using namespace std;
#define fo(i, n) for (i = 0; i < n; i++)
#define FOR(i,a,b) for (int i = (a); i <= (b); ++i)
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
int visited[10];
vector<int>vec[10];
void dfs(int at){
    visited[at] = 1;
    cout<<at<<" ";
    for (int i = 0; i < vec[at].size(); i++){
        if(visited[vec[at][i]]==0)
            dfs(vec[at][i]);
    }
}
vector<pair<ll, int>> factor(ll x) {    // to findout all prime factors
    vector<pair<ll,int>> pri;
    for (ll i = 2; i*i <= x; ++i) 
        if (x % i == 0) {
            int t = 0;
            while (x % i == 0) x /= i, t ++;
            pri.push_back({i,t});
        }
    if (x > 1) pri.push_back({x,1});
    return pri;
}

int nhour, nmin;
int h, m;
int flip[10] = { 0,1,5,-1,-1,2,-1,-1,8,-1 };
 
bool correct() {
	int a = h / 10, b = h % 10, c = m / 10, d = m % 10;
	if (flip[a] == -1) return false;
	if (flip[b] == -1) return false;
	if (flip[c] == -1) return false;
	if (flip[d] == -1) return false;
	int x = 10 * flip[d] + flip[c], y = 10 * flip[b] + flip[a];
	if (x >= nhour || y >= nmin) return false;
	return true;
}
 
void solve() {
	while (!correct()) {
		if (++m >= nmin) {
			m = 0;
			if (++h >= nhour) {
				h = 0;
			}
		}
	}
}
 
void run() {
	scanf("%d%d", &nhour, &nmin);
	scanf("%d:%d", &h, &m);
	solve();
	printf("%02d:%02d\n", h, m);
}
 
int main() {
	int ncase; scanf("%d", &ncase); FOR(i, 1, ncase) run();
	return 0;
}