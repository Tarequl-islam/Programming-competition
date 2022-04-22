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
vector<pair<ll, int>> factor(ll x) {    // to findout all prime factors
    vector<pair<ll,int>> pri;
    for (ll i = 2; i*i <= x; ++i) 
        if (x % i == 0) {
            int t = 0;
            while (x % i == 0) x /= i, t ++;
            pri.push_back({i,t});
        }
    if (x > 1) pri.push_back({x,1});
    return pri;
}


int main(){ //s: 0.0 am - e: 0.00am;
    
    ll n, m, a = -1, b = -1, c, i, j, k, mx = 0, mn = 0;
    string s[505];
    cin>>n>>m;
    for (i = 0; i < n; i++){
        cin>>s[i];
    }
    for (i = 0; i < n; i++){
        int cnt = 0;
        for(j = 0; j < m; j++){
            if(s[i][j]=='*') cnt++, mx++;
        }
        if(cnt>=3) a = i;
    }
    for (i = 0; i < m; i++){
        int cnt = 0;
        for(j = 0; j < n; j++){
            if(s[j][i]=='*') cnt++;
        }
        if(cnt>=3) b = i;
    }
    if(a <= 0 || b <= 0 || a == n-1 || b == m-1){
        cout<<"NO\n";
        return 0;
    }
    int ok = 0;
    i = a;
    while(i >= 0 && s[i][b] == '*') i--, mn++;
    if(i==a) ok = 1;
    i = a+1;
    while(i < n && s[i][b] == '*') i++, mn++;
    if(i==a+1) ok = 1;
    i = b-1;
    while(i >= 0 && s[a][i] == '*') i--, mn++;
    if(i==b-1) ok = 1;
    i = b+1;
    while(i < m && s[a][i] == '*') i++, mn++;
    if(i==b+1) ok = 1;

    if(mx == mn && ok==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
