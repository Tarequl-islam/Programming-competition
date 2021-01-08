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
    ll n=0, m=0, a, b, c,d, i, j, k=0, mx = INT_MIN, mn = 1e18;
    cin>>a>>b;
    c=a+b;
    d = 0;
    while(a>=10){
        if(a%10!=0) n+= (a%10)*pow(10,d++);
        a /= 10;
    }
    n+= a*pow(10,d++);
    d = 0;
    while(b>=10){
        if(b%10!=0) m+= (b%10)*pow(10,d++);
        b /= 10;
    }
    m+= b*pow(10,d++);
    d = 0;
    while(c>=10){
        if(c%10!=0) k+= (c%10)*pow(10,d++);
        c /= 10;
    }
    k+= c*pow(10,d++);
    j = n+m;
    if(j==k)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
