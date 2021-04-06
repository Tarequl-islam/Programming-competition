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

string s[505];
int n, m, k, vis[505][505];
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
void dfs(int i, int j){
    if(!((i>=0 && i<n) && (j>=0 && j<m)) || s[i][j]=='#') return;
    vis[i][j]=1;
    for(int ii=0; ii<4; ii++){
        if(vis[i+dx[ii]][j+dy[ii]]==0)
            dfs(i+dx[ii], j+dy[ii]);
    }
    if(k){
        s[i][j]='X';
        k--;
    }
}
int main(){ //s: 03.00am - e: 07.00am;
    int a, b, c, i, j, mx = 0, mn = 0;
    cin>>n>>m>>k;
    for (i = 0; i < n; i++){
        cin>>s[i];
    }
    for (i = 0; i < n; i++){
        for(j=0;j<m; j++)
            if(vis[i][j]==0) dfs(i,j);
    }
    for (i = 0; i < n; i++){
        //printf("%s\n", s[i]);
        cout<<s[i]<<endl;
    }
    return 0;
}
