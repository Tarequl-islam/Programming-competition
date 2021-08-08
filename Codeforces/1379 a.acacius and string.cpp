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

int main(){ //s: 0.0 am - e: 05.45am;
    int t=1, cs = 1;
    cin >> t;
    while (t--){
        ll n, m, a, b, c, i, j, k, mx = 0, mn = -1;
        string s, sa, sb, sc, ss="abacaba";
        cin>>n;
        cin>>s;
        for (i = 0; i < n-6; i++){
            string sa = s.substr(i, 7);
            if(sa==ss) mx++;
        }
        for (i = 0; i < n-6; i++){
            sa = s.substr(i, 7);
            ll tmp = 0;
            for(j=0; j<7; j++){
                if(sa[j]==ss[j] || sa[j]=='?');
                else tmp =1;
            }
            if(tmp==0){
                sb = "";
                sc = "";
                if(i>3) sb= s.substr(i-4, 4);
                if(i+10 < n) sc = s.substr(i+7, 4);
                if(sb=="abac" || sc == "caba") continue;
                if(i>5) sb= s.substr(i-6, 6);
                if(i+12 < n) sc = s.substr(i+7, 6);
                if(sb=="abacab" || sc == "bacaba") continue;
                mn = i;
                break;
            }
        }
        if(mx==0 && mn!=-1){
            i=0;
            for(j=mn; j<mn+7; j++){
                s[j]= ss[i++];
            }
        }
        for(j=0; j<n; j++) if(s[j]=='?') s[j]='d';
        if(mx>1 || mn==-1) cout<<"No"<<endl;
        else cout<<"Yes\n"<<s<<endl;
    }
    return 0;
}
