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


ll p[200005], n, x, a, y, b, k;
bool check(ll ind) {
	vector<ll> c;
	for (ll i = 0; i < ind; i++) {
		ll prod = 0;
		if ((i + 1) % a == 0) {
			prod += x;
		}
		if ((i + 1) % b == 0) {
			prod += y;
		}
		c.push_back(prod);
	}
	sort(c.rbegin(), c.rend());
	ll sum = 0;
	for (ll i = 0; i < ind; i++) {
		sum += c[i] * p[i];
	}
	return (sum >= k);
}

int main(){ //s: 11.11 am - e: 0.00am;
    int t=1, cs = 1;
    cin >> t;
    while (t--){
        cin >> n;
        for (ll i = 0; i < n; i++) {
            cin >> p[i];
            p[i] /= 100;
        }
        sort(p, p + n);
        reverse(p, p + n);
        cin >> x >> a >> y >> b >> k;
        ll low = 0, high = n + 1;
        if (!check(n)) {
            cout << "-1\n";
            continue;
        }
        while (high - low > 1) {
            ll mid = (low + high) / 2;
            if (check(mid)) {
                high = mid;
            } else {
                low = mid;
            }
        }
        cout << high << '\n';
    }
    return 0;
}
