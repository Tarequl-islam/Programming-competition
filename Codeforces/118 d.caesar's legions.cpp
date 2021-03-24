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
    return left.second < right.second; }
//int find(int x) { return (p[x] == x ? x : p[x] = find(p[x])); } //p[find(i)]=find(j);
int lim_k1, lim_k2;
int mem[105][105][15][15];
int dp(int n1, int n2, int k1, int k2){
    if(n1+n2 <=0) return 1;
    if(mem[n1][n2][k1][k2]!=-1) return mem[n1][n2][k1][k2];
    int x= 0;
    if(n1>0 && k1>0) x=dp(n1-1, n2, k1-1, lim_k2);
    int y =0;
    if(n2>0 && k2>0) y=dp(n1, n2-1, lim_k1, k2-1);
    return mem[n1][n2][k1][k2] = (x+y)%100000000;
}
int main(){ //s: 06.24am - e: 07.00am;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll n1, n2, k1, k2, r, a, b, c, i, j, k,l, mx=0, mn=0;
    cin>>n1>>n2>>k1>>k2;
    lim_k1=k1;
    lim_k2=k2;
    fo(i, 102) fo(j,102) fo(k,12) fo(l, 12) mem[i][j][k][l]=-1;
    mx = dp(n1, n2, k1, k2);
    cout<<mx<<endl;
    return 0;
}
