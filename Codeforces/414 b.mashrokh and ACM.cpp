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
#define M 1000000007
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

ll N,K;
ll dp[2020][2020];
ll cal(ll kk, ll i){
    if(kk<=0) return 1;
    else if(dp[i][kk]!=-1) return dp[i][kk];
    ll ans =0;
    for(ll j = i; j<=N; j+=i){
        if(j%i==0) ans += cal(kk-1, j);
        ans %= M;
    }
    return dp[i][kk] = ans;
}
int main(){
    ll m, a, b, c, i, j, mx = 0, mn = 1e18;
    cin>>N>>K;
    memset(dp, -1, sizeof(dp));
    mx = cal(K, 1);
    cout<<mx<<endl;
    return 0;
}
