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



void solve() {
    int n, q, maxValue = -1, a_i, maxIndex = 0;
    cin >> n >> q;
    deque<int> d;
    for (int i = 0; i < n; i++) {
        cin >> a_i;
        d.push_back(a_i);
        maxValue = max(maxValue, a_i);
    }
    map<int, pair<int, int>> answer;
    while (true) {
        int first = d.front();
        d.pop_front();
        int second = d.front();
        d.pop_front();
        if (first == maxValue) {
            d.push_front(second);
            d.push_front(first);
            break;
        }
        maxIndex++;
        answer[maxIndex] = {first, second};
        if (second > first) {
            swap(first, second);
        }
        d.push_front(first);
        d.push_back(second);
    }
    int a[n];
    for (int i = 0; i < n; i++) {
        a[i] = d.front();
        d.pop_front();
    }
    for (int i = 0; i < q; i++) {
        ll m_j;
        cin >> m_j;
        if (m_j <= maxIndex) {
            cout << answer[m_j].first << " " << answer[m_j].second << '\n';
        } else {
            cout << maxValue << " " << a[(m_j - (maxIndex + 1)) % (n - 1) + 1] << '\n';
        }
    }
}

int main() {
    solve();
    return 0;
}
