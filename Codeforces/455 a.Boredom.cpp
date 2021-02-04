#include<bits/stdc++.h>
using namespace std;
#define fo(i, n) for (i = 0; i < n; i++)
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
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 2*acos(0.0)
#define M 998244353
#define N 100005
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
ll GCD(ll a, ll b) { return (a % b) == 0 ? b : GCD(b, a % b); }
ll mod(ll x) { return ((x % M + M) % M); }
bool cmp(const pii &left, const pii &right){
    return left.first > right.first || (left.first == right.first && left.second < right.second);
}
int main(){
    ll n, m, a, b, c, i, j, k, mx = 0, mn = 1e18;
    ll ar[N],p[N]={0},v[N];
    cin>>n;
    for (i = 0; i < n; i++){
        sl(ar[i]);
        p[ar[i]]++;
    }
    v[1]=p[1]; v[2]=p[2]*2;
    v[2]=max(v[1],v[2]);
    for ( i = 3; i <= 100000; i++){
        v[i] = max(p[i]*i+v[i-2], v[i-1]);
    }
    //v[i] = max(x+v[i-2], v[i-1]);
    cout<<v[100000]<<endl;
    return 0;
}
