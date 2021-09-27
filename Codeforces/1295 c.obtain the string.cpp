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

const int N = int(2e5) + 99;
const int INF = int(1e9) + 99;
int tc;
string s, t;
int nxt[N][26];

int main() {
    cin >> tc;
    while(tc--){
        cin >> s >> t;
        for(int i = 0; i < s.size() + 5; ++i)
            for(int j = 0; j < 26; ++j)
                nxt[i][j] = INF;

        for(int i = int(s.size()) - 1; i >= 0; --i){
            for(int j = 0; j < 26; ++j)
                nxt[i][j] = nxt[i + 1][j];
            nxt[i][s[i] - 'a'] = i;
        }    
        int res = 1, pos = 0;
        for(int i = 0; i < t.size(); ++i){
            if(pos == s.size()){
                pos = 0;
                ++res;
            }
            if(nxt[pos][t[i] - 'a'] == INF){
                pos = 0; 
                ++res;
    		}
    		if(nxt[pos][t[i] - 'a'] == INF && pos == 0){
                res = INF;
                break;
            }    
            pos = nxt[pos][t[i] - 'a'] + 1;
        }
        if(res >= INF) cout << -1 << endl;
        else cout << res << endl;
    }
    return 0;
}