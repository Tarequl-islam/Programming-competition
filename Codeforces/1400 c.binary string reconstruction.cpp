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

string f(string s, int x) {
    string res = s;
    for (int i = 0; i < s.size(); ++i) {
        if (i - x >= 0 && s[i - x] == '1' || i + x < s.size() && s[i + x] == '1')
            res[i] = '1';
        else res[i] = '0';
    }
    return res;
}
int main(){ //s: 0.0 am - e: 0.00am; 
    int t=1, cs = 1;
    cin >> t;
    while (t--){
        ll n, m, a, b, c, i, j, k, mx = 0, mn = 1e18;
        string s, ss="";
        cin>>s>>k;
        n = s.length();
        for (i = 0; i < n; i++) ss+='1';
        for (i = 0; i < n; i++){
            if(s[i]=='0'){
                if(i-k >=0) ss[i-k]='0';
                if(i+k<n) ss[i+k]='0';
            }
        }
        if(f(ss, k)!=s) cout<<-1<<endl;
        else cout<<ss<<endl;
    }
    return 0;
}
