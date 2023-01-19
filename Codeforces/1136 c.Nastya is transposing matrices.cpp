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
#define PI 3.1415926535897932384626433832795028841971
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


int main(){ //s: 0.0 am - e: 0.00am;
    int t=1, cs = 1;
    //cin >> t;
    while (t--){
        ll n, m, a, b, c, i, j, k, mx = 0, mn = 1e18;
        cin>>n>>m;
        ll ar[n+5][m+5], br[n+5][m+5];
        for (i = 0; i < n; i++){
            for(j=0; j<m; j++){
                sl(ar[i][j]);
            }
        }
        for (i = 0; i < n; i++){
            for(j=0; j<m; j++){
                sl(br[i][j]);
            }
        }
        for (i = 0; i < n; i++){
            vl st1, st2;
            for(j=0, k = i; j<m && k>=0; j++, k--){
                st1.pb(ar[k][j]);
                st2.pb(br[k][j]);
            }
            sort(st1.begin(), st1.end());
            sort(st2.begin(), st2.end());
        
            if(st1 != st2) mx = 1;
        }
        for (i = 1; i < m; i++){
            vl st1, st2;
            for(j=i, k = n-1; j<m && k>=0; j++, k--){
                st1.pb(ar[k][j]);
                st2.pb(br[k][j]);
            }
            sort(st1.begin(), st1.end());
            sort(st2.begin(), st2.end());
        
            if(st1 != st2) mx = 1;
        }
        cout<<(mx? "NO" : "YES")<<endl;
    }
    return 0;
}
