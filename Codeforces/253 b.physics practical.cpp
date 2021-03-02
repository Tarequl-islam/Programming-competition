#include <bits/stdc++.h>
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
#define PI 2 * acos(0.0)
#define M 998244353
#define INF 1000000
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
int ar[100005], n, p[5005];
int mem[5005][5005];
int dp(int i, int j){
    if(i*2>=j) return 0;
    if(i>=j) return INF;
    if(mem[i][j]!=-1) return mem[i][j];
    int ans= 0, a=1, b=1;
    while(p[i+a]==0) a++;
    while(p[j-b]==0) b++;
    ans=min(dp(i+a, j)+p[i], dp(i, j-b)+p[j]);
    return mem[i][j]=ans;
}

int main(){ 
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int m, i, j, k, mx=0, mn=1e8, ans=0;
    cin >> n;
    for (i = 0; i < n; i++){
        si(ar[i]);
        p[ar[i]]++;
        mx=max(mx,ar[i]);
        mn=min(mn,ar[i]);
    }
    memset(mem, -1, sizeof(mem));
    cout <<dp(mn, mx)<< endl;
    return 0;
}
