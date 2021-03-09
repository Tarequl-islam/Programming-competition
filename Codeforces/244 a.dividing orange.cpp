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
    return left.first > right.first || (left.first == right.first && left.second < right.second);
}

int main(){
    ll n, m, a, b, c, i, j, k, mx = 0, mn = 1e18;
    ll ar[205], p[1000]={0};
    cin>>n>>k;
    for (i = 1; i <= k; i++){
        sl(ar[i]);
        p[ar[i]] = 1;
    }
    for(i=1; i<=k; i++){
        cout<<ar[i]<<" ";
        for(j=1; j<n; j++){
            ar[i]+=k;
            if(ar[i]>n*k){
                ar[i] = ar[i]%k;
                if(ar[i]==0) ar[i]+=k;
            }
            while(p[ar[i]]==1){
                ar[i]++;
                if(ar[i]>n*k) ar[i]=1;
            }
            cout<<ar[i]<<" ";
            p[ar[i]]=1;
        }
        cout<<endl;
    }
    return 0;
}
