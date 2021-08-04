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

int main(){ //s: 08.50 am - e: 09.25am;
    int t=1, cs = 1;
    cin >> t;
    while (t--){
        ll n, m, a, b, c, i, j, k, mx = 0, mn = 1e18;
        ll ar[100005];
        cin>>n;
        cin>>ar[0];
        for (i = 1; i < n; i++){
            sl(ar[i]);
            if(ar[i]!=-1 && ar[i-1]!=-1) 
                mx= max(mx, abs(ar[i]-ar[i-1]));
        }
        vl v;
        if(ar[0]==-1 && ar[1]!=-1) v.pb(ar[1]);
        if(ar[n-1]==-1 && ar[n-2]!=-1) v.pb(ar[n-2]);
        for (i = 1; i < n-1; i++){
            if(ar[i]==-1){
                if(ar[i-1]!=-1) v.pb(ar[i-1]);
                if(ar[i+1]!=-1) v.pb(ar[i+1]);
            }
        }
        if(v.size()==0){
            cout<<max(mx, 0ll)<<" "<<0<<endl;
            continue;
        }
        else if(v.size()==1){
            cout<<max(mx, 0ll)<<" "<<v[0]<<endl;
            continue;
        }
        sort(v.begin(), v.end());
        a = (v[0]+v[v.size()-1])/2;
        cout<<max(mx, max(a-v[0], v[v.size()-1]-a))<<" "<<a<<endl;
    }
    return 0;
}
