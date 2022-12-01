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

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int& k : a)
        cin >> k;

    vector<int> tor(n), tol(n);
    iota(tol.begin(), tol.end(), 0);
    iota(tor.begin(), tor.end(), 0);

    tol[0] = 0;
    for (int i = 1; i < n; ++i)
        if (a[i - 1] >= a[i])
            tol[i] = tol[i - 1];

    tor[n - 1] = n - 1;
    for (int i = n - 2; i >= 0; --i)
        if (a[i] <= a[i + 1])
            tor[i] = tor[i + 1];

    while (m--) {
        int l, r;
        cin >> l >> r;
        --l; --r;
        cout << (tol[r] <= tor[l] ? "Yes" : "No") << '\n';
    }
    return 0;
}