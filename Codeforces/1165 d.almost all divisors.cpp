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
vector<ll> factor(ll x) {    // to findout all prime factors
    vector<ll> pri;
    for (ll i = 2; i*i <= x; ++i) 
        if (x % i == 0) {
            pri.push_back(i);
            if(i!= x/i) pri.push_back(x/i);
        }
    return pri;
}


int main(){ //s: 12.53 am - e: 01.24am;
    int t=1, cs = 1;
    cin >> t;
    while (t--){
        ll n, m, a, b, c, i, j, k, mx = 0, mn = 0;
        cin>>n;
        ll ar[n+5];
        for (i = 0; i < n; i++){
            sl(ar[i]);
        }
        sort(ar, ar+n);
        j = n-1;
        mx = ar[0]*ar[j];
        for (i = 0; i <= j; i++){
            if(ar[i] * ar[j] != mx) mn = 1;
            j--;
        }
        vl v = factor(mx);
        if(v.size()!= n) mn = 1;
        cout<<(mn? -1 : mx)<<endl;
    }
    return 0;
}
