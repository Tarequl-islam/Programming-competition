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

int fx[] = {1, 0, -1, 0};
int fy[] = {0, 1, 0, -1};
int n, m, stx, sty;
string str[55];
int vis[55][55];
int dfs(int x, int y, char cr, int cnt){
    if(x>=m || x<0 || y>=n || y<0) return 0;
    if(stx == x && sty == y && vis[y][x] && cnt>=4) return 1;
    if(vis[y][x]) return 0;
    vis[y][x] = 1;
    cnt++;
    int tx, ty, ans = 0;
    for (int i = 0; i < 4; i++){
        tx = x + fx[i];
        ty = y + fy[i];
        if(tx>=m || tx<0 || ty>=n || ty<0) ;
        else if(str[ty][tx] == cr)
            ans = max(ans, dfs(tx, ty, cr, cnt));
    }
    return ans;
}

int main(){ //s: 0.0 am - e: 0.00am;
    int t=1, cs = 1;
    //cin >> t;
    while (t--){
        int a, b, c, i, ii, j, k, mx = 0, mn = 1e8;
        cin>>n>>m;
        for (i = 0; i < n; i++){
            cin>>str[i];
        }
        for(i = 0; i<n; i++){
            for(j=0; j<m; j++){
                stx = j;
                sty = i;
                for(ii=0; ii<=n; ii++)
                    CLR(vis, 0);
                if(dfs(j, i, str[i][j], 0)){
                    cout<<"Yes"<<endl;
                    return 0;
                }
            }
        }
        cout<<"No"<<endl;
    }
    return 0;
}
