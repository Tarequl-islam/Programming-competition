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
    return left.second < right.second; }
//int find(int x) { return (p[x] == x ? x : p[x] = find(p[x])); } //p[find(i)]=find(j);

int main(){ //s: 06.24am - e: 07.00am;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n, r, avg, a, b, c, i, j, k;
    ll mx=0, mn=0;
    vpii v;
    cin>>n>>r>>avg;
    for (i = 0; i < n; i++){
        scanf("%d%d", &a, &b);
        v.push_back(mp(a, b));
        mx+=a;
    }
    sort(v.begin(), v.end(), cmp);
    for(i=0; i<=n; i++){
        if(mx>=1ll*avg*n || i==n) break;
        if(v[i].first<r){ 
            if(r-v[i].first>1ll*avg*n-mx){
                mn+=(1ll*avg*n-mx)*v[i].second;
                mx+=1ll*avg*n-mx;
            }
            else{
                mn+=1ll*(r-v[i].first)*v[i].second;
                mx+=r-v[i].first;
            }
        }
    }
    cout<<mn<<endl; 
    return 0;
}
