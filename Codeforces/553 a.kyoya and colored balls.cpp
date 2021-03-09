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
    return left.first > right.first || (left.first == right.first && left.second < right.second);
}
ll mem[1005][1005];

int main(){ 
    ll n, m, a, b, c, i, j, k, mx=0, ans=1;
    ll ar[1005];
    cin>>k;
    for (i = 1; i <= k; i++){
        sl(ar[i]);
    }
    mem[0][0]=1;
    for( i=1; i<=1000; i++){
        mem[i][0]=1;
        for( j=1; j<=1000; j++){
            mem[i][j]=(mem[i-1][j-1]+mem[i-1][j])%MOD;
        }
    }
    for(i=1; i<=k; i++) mx+=ar[i];
    for(i=k; i>=1; i--){
        ans= (ans*mem[mx-1][ar[i]-1])%MOD;
        mx-=ar[i];
    }
    cout<<ans<<endl;
    return 0;
}
