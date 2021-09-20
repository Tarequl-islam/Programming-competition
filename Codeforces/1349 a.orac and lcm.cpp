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
const int maxn = 100005;
int n;
ll a[maxn];
ll pre[maxn], suf[maxn];
ll ga, ans;

int main(){
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%lld", &a[i]);
    pre[1] = a[1];
    suf[n] = a[n];
    for (int i = 2; i <= n; i++) pre[i] = __gcd(pre[i - 1], a[i]);
    for (int i = n - 1; i >= 1; i--)
        suf[i] = __gcd(suf[i + 1], a[i]);
    for (int i = 0; i <= n - 1; i++){
        if (i == 0) ans = suf[2];
        else if (i == n - 1)
            ans = ans * pre[n - 1] / __gcd(pre[n - 1], ans);
        else
            ans = ans * __gcd(pre[i], suf[i + 2]) / __gcd(__gcd(pre[i], suf[i + 2]), ans);
    }
    printf("%lld\n", ans);
    return 0;
}