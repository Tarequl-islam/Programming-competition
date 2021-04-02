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
#define Ss second
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

int main(){ 
    int N, P;
    string S;
    cin >> N >> P;
    cin >> S;
    int c = (N+1)/2;
    if(P > c) P = N%2 ? c - (P-c) : c - (P-c-1);
    P--;
    int a = 0, b = N-1, l = 100005, r = -1, ans = 0;
    while(a < b){
        int req = min(abs(S[a]-S[b]), 26 - abs(S[a]-S[b]));
        if(req) l = min(l,a), r = max(r,a);
        ans += req;
        a++, b--;
    }
    if(l>r) cout << "0";
    else if(P > r) cout << ans + P-l;
    else if(P < l) cout << ans + r-P;
    else{
        int best = min(P-l+r-l,r-P+r-l);
        cout << ans + best;
    }
    return 0;
}
