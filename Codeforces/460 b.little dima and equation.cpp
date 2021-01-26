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

int main(){ 
    ll n, m, a, b, c, i, j=0, k,x, mx = 0, mn = 1e18;
    vl v;
    cin>>a>>b>>c;
    for ( i = 1; i <= 81; i++){
        x = b*pow(i,a)+c;
        k=x;
        mx=0;
        while(k>0){
            mx+=k%10;
            k/=10;
        }
        if(mx==i && x<1000000000){
            v.push_back(x);
        }
    }
    sort(v.begin(), v.end());
    cout<<v.size()<<endl;
    for (i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
