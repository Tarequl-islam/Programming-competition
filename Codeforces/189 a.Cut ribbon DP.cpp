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
int mem[5][4005];
int n, ar[5];
int dp(int i, int w){
    if(w==0) return 0;
    if(w<=0 || i==3) return -9000000;
    if(mem[i][w]!=-1) return mem[i][w];
    int ans =  max(dp(i, w-ar[i])+1, dp(i+1, w));
    return mem[i][w]=ans;
}
int main(){
    int m, a, b, c, i, j, k, mx = 0, mn = 1e18;
    cin>>n>>ar[0]>>ar[1]>>ar[2];
    memset(mem, -1, sizeof(mem));
    cout<<dp(0, n)<<endl;
    return 0;
}
