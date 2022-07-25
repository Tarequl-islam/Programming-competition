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

const int N = 1003;
int x[3], y[3];
 
void pr(int x, int y, int fx, int fy){
    while (x < fx){
        ++x;
        printf("%d %d\n", x, y);
    }
    while (x > fx){
        --x;
        printf("%d %d\n", x, y);
    }
    while (y < fy){
        ++y;
        printf("%d %d\n", x, y);
    }
    while (y > fy){
        --y;
        printf("%d %d\n", x, y);
    }
}
 
int main(){  //s: 02.05 am - e: 0.00am;
    for (int i = 0; i < 3; ++i)
        scanf("%d%d", &x[i], &y[i]);
    int ans = N * N;
    int ansx, ansy;
    for (int i = 0; i < N; ++i){
        for (int j = 0; j < N; ++j){
            int yans = 0;
            for (int k = 0; k < 3; ++k)
                yans += (abs(i - x[k]) + abs(j - y[k]) + 1);
            yans -= 2;
            if (yans < ans){
                ans = yans;
                ansx = i;
                ansy = j;
            }
        }
    }
    printf("%d\n", ans);
    printf("%d %d\n", ansx, ansy);
    for (int i = 0; i < 3; ++i)
        pr(ansx, ansy, x[i], y[i]);
    return 0;
}