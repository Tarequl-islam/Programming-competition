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
#define PI 3.1415926535897932384626
#define M 998244353
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
bool cmp(const pii &left, const pii &right){
    return left.first > right.first || (left.first == right.first && left.second < right.second);
}
long long mod(long long x){
    return ((x % M + M) % M);
}
int main(){
    ll n, m, a, b, c, i, j, k, mx = 0, mn = 2222222;
    int ar[200005];
    vector<int> v;
    cin>>n>>k;
    for (i = 0; i < n; i++){
        si(ar[i]);
    }
    a = n-k+1;
    for ( i = 0; i < n; i++){
        if(ar[i]>=a){
            v.push_back(i);
            mx+=ar[i];
        }
    }
    ll ans = 1;
    for (i = 0; i < v.size()-1; i++){
        ans*= 1LL*(v[i+1]-v[i]);
        ans = mod(ans);
    }
    cout<<mx<<" "<<ans<<endl;
    return 0;
}
