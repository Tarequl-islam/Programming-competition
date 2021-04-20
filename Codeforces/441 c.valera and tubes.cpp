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

int dx[]={-1, 0, 1, 0};
int dy[]={0, -1, 0, 1};
int n, m, K, k, a, ar[305][305];
void dfs(int i, int j){
    if(ar[i][j]==1 || i<0 || i>=n || j<0 || j>=m) return;
    ar[i][j]=1;
    for(int l=0; l<4; l++)
        dfs(i+dx[l], j+dy[l]);
    if(K>0){
        cout<<i+1<<" "<<j+1<<" ";
        if(K==1) cout<<endl;
        K--;
    }
    else{
        if(a==1) K=(m*n)-(k-1)*((n*m)/k);
        else K= ((n*m)/k);
        cout<<K<<" "<<i+1<<" "<<j+1<<" ";
        K--;
        a--;
    }
     
}

int main(){ //s: 01.00am - e: 02.10am;
    cin>>n>>m>>k;
    a=k;
    dfs(0,0);
    return 0;
}
