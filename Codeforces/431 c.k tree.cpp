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
int dd, kk, nn;
int dp[120][120];
int find(int n, int d){
    if(n<0) return 0;
    if(n==0){
        if(d>=dd) return 1;
        else return 0;
    }
    if(dp[n][d]!=-1) return dp[n][d];
    int ans = 0;
    for (int i = 1; i <= kk; i++){
        ans+=find(n-i, max(i, d));
        ans%=1000000007;
    }
    return dp[n][d]=ans;
}
int main(){ 
    int m, a, b, c,d, i, j, k, mx = 0, mn = 1e18;
    cin>>nn>>kk>>dd;
    memset(dp, -1, sizeof(dp));
    cout<<find(nn,0)<<endl;
    return 0;
}
