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
ll GCD(ll a, ll b) { return (a % b) == 0 ? b : GCD(b, a % b); }
ll mod(ll x) { return ((x % M + M) % M); }
bool cmp(const pii &left, const pii &right){
    return left.first > right.first || (left.first == right.first && left.second < right.second);
}

int main(){
    ll n, m, a, b, c, i, j, k, mx = 0,g, ans =0;
	cin >> a >> b;
	g = __gcd (a, b);
	a /= g, b /= g;
	while (a % 2 == 0) a /= 2, ans++;
	while (a % 3 == 0) a /= 3, ans++;
	while (a % 5 == 0) a /= 5, ans++;
	while (b % 2 == 0) b /= 2, ans++;
	while (b % 3 == 0) b /= 3, ans++;
	while (b % 5 == 0) b /= 5, ans++;
    cout<<((a>1||b>1)?-1:ans)<<endl;
    return 0;
}
