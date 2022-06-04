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
struct Node{
    int a, b, c, cost;
    Node(int _a, int _b, int _c, int _cost){
        a = _a;
        b = _b;
        c = _c;
        cost = _cost;
    }
};
bool operator < (Node a, Node b){
    return a.cost > b.cost;
}
int main(){ //s: 0.0 am - e: 0.00am;
    int t=1, cs = 1;
    //cin >> t;
    while (t--){
        ll n;
        cin >> n;
        vector<vector<int>> a(n - 2, vector<int> (3));
        for(int i = 0; i < n - 2; i++) {
            for(int j = 0; j < 3; j++) {
                cin >> a[i][j];
            }
        }
        vector<vector<int>> wh(n + 1);
        for(int i = 0; i < n - 2; i++) {
            for(int j = 0; j < 3; j++) {
                wh[a[i][j]].push_back(i);
            }
        }
        vector<int> ans;
        for(int i = 1; i <= n; i++) {
            if(wh[i].size() == 1) {
                ans.push_back(i);
                break;
            }
        }
        vector<bool> used(n);
        for(int i: a[wh[ans[0]][0]]) {
            if(wh[i].size() == 2) {
                ans.push_back(i);
                break;
            }
        }
        for(int i = 2; i < n; i++) {
            int ind = 0;
            for(int j: wh[ans[i - 1]]) {
                for(int u: wh[ans[i - 2]]) {
                    if(j == u && !used[j]) {
                        used[j] = true;
                        ind = j;
                        break;
                    }
                }
            }
            for(int j: a[ind]) {
                if(j != ans[i - 1] && j != ans[i - 2])  {
                    ans.push_back(j);
                    break;
                }
            }
        }
        for(int i: ans) cout << i << " ";
    }
    return 0;
}
