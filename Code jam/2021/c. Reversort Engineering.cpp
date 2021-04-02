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

int main(){
    int t, cs = 1;
    cin >> t;
    while (t--){
        ll n, m, a, b, c, i, j, k, mx = 0, mn = 0;
        ll ar[105];
        cin>>n>>c;
        
        if(c<n-1 || c > ((n*(n+1))/2)-1)
            cout<<"Case #"<<cs++<<": IMPOSSIBLE"<<endl;
        else{
            for (i = 0; i <= n; i++) ar[i]=i;
            for (i = 1; i < n; i++){
                if(c > (n-i)*2){
                    for(j=i; j<i+(1+n-i)/2; j++){
                        swap(ar[j], ar[n-(j-i)]);
                    }
                    c -= (1+n-i);
                }
                else{
                    a = 1+n-(c-(n-(i+1)));
                    for(j=a; j <= a+(n-a)/2; j++){ 
                        swap(ar[j], ar[n-(j-a)]);
                    }
                    break;
                }
            }
            cout<<"Case #"<<cs++<<": ";
            for (i = 1; i <= n; i++) cout<<ar[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}
