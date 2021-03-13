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

int main(){
    int n, m, a, b, i, j=0, k, mx=0;
    cin>>n>>m>>k;
    int ar[1005][1005];
    for(i=1; i<=m; i++) ar[0][i]=i;
    for(i=1; i<=n; i++) ar[i][0]=i;
    for(i=1; i<=n; i++){
        for(j=1; j<=m; j++){
            si(ar[i][j]);
        }
    }
    char c[2];
    for(i=0; i<k; i++){
        scanf("%s",&c);
        scanf("%d%d", &a, &b);
        if(c[0]=='g') pi(ar[ar[a][0]][ar[0][b]]);
        else if(c[0]=='r'){
            swap(ar[a][0], ar[b][0]);
        }
        else if(c[0]=='c'){
            swap(ar[0][a], ar[0][b]);
        }
    }
    return 0;
}