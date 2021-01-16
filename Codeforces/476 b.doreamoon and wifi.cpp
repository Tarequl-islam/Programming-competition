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
int choose(int n, int k) {
	int u=1;
	for (int i=n-k+1; i<n+1; i++)
		u *= i;
	for (int j=2; j<k+1; j++)
		u /= j;
	return u;
}
int main() {
	int actual = 0, guessed = 0,q=0;
	string s;
	cin >> s;
	for (int i=0; i<s.size(); i++) {
		if (s[i] == '+')
			actual++;
		else
			actual--;
	}
	cin >> s;
	for (int i=0; i<s.size(); i++) {
		if (s[i] == '+')
			guessed++;
		else if (s[i] == '-')
			guessed--;
		else
			q++;
	}
	int d = abs(actual-guessed);
	if (d > q || (d+q)%2 == 1) {
		cout << "0\n";
		return 0;
	}
	if (q == 0) {
		cout << "1\n";
		return 0;
	}
	double prob = 1.0;
	for (int i=0; i<q; i++) {
		prob /= 2.0;
	}
	prob *= choose(q,(d+q)/2);
	cout << setprecision(12) << prob << '\n';
}