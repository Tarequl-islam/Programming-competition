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
        int n, m, a, b, c, i, j, k=0, mx = 0, mn = 1e8;
        cin>>n>>m;
        vector <pair <int, int> > pairs;
        for (int i = 0; i < m; i++) {
            int a, b;
            cin >> a >> b;
            a--, b--;
            pairs.emplace_back(a, b);
        }
        vector <int> values = {pairs[0].first, pairs[0].second};
        for (int x : values) {
            vector <int> val(n);
            int all = 0;
            for (auto c : pairs) {
                if (c.first != x && c.second != x) {
                    val[c.first]++, val[c.second]++, all++;
                }
            }
            if (*max_element(val.begin(), val.end()) == all) {
                cout << "YES\n";
                return 0;
            }
        }
        cout << "NO\n";
        return 0;
    }
}