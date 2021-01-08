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
int main(){ //s- , e-
    ll n, m, a, b, c, i, j, k, mx = 0, mn = 1e18;
    ll ar[1005];
    vi v1, v2, v3;
    cin>>n;
    for (i=0; i<n; i++){
        cin>>ar[i];
    }
    sort(ar, ar+n);
    for ( i = 0; i < n; i++){
        if(ar[i]>=0) break;
        mx++;
    }
    if(mx==n-1){
        cout<<1<<" "<<ar[0]<<endl;
        cout<<2<<" "<<ar[n-2]<<" "<<ar[n-3]<<endl;
        cout<<n-3<<" 0 ";
        for ( i = 1; i < n-3; i++) cout<<ar[i]<<" ";
        cout<<endl;
    }
    else{
        cout<<1<<" "<<ar[0]<<endl;
        cout<<1<<" "<<ar[n-1]<<endl;
        cout<<n-2<<" ";
        for ( i = 1; i < n-1; i++) cout<<ar[i]<<" ";
        cout<<endl;
    }
    return 0;
}
