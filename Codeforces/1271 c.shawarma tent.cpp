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

int main(){ //s: 06.24am - e: 07.00am;
    int t=1, cs = 1;
    //cin >> t;
    while (t--){
        ll n, m, a, b, c, i, j=0, k, ans=0,mx=0, mn = 0;
        ll ar[200005], br[200005];
        cin>>n>>a>>b;
        ll xp=0, xn=0, yp=0, yn=0;
        for (i = 0; i < n; i++){
            sl(ar[i]);
            sl(br[i]);
            if(ar[i]>a) xp++;
            else if(ar[i]<a) xn++;
            if(br[i]>b) yp++;
            else if(br[i]<b) yn++;
        }
        ans = max(max(xp, xn), max(yp, yn));
        if(xp==ans) a++;
        else if(xn==ans) a--;
        else if(yp==ans) b++;
        else if(yn==ans) b--;

        cout<<ans<<endl<<a<<" "<<b<<endl;
    }
    return 0;
}
