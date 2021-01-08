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

int main(){ //s- 07.12, e-
    ll n, l ,r , m, a, b, c,d, i, j, k, mx = 0, mn = 1e18;
    cin>>l>>r;
    bool start = false;
    ll sum = 0;
    ll old = l-1;
    for (int len = 1; len < 15; ++len){
        int tmp = 1<<len;
        for (int i = 0; i < tmp; ++i){
            ll ans = 0;
            for (int m = len-1; m >= 0; --m){
                ans *= 10;
                if ((i&(1<<m))> 0)
                    ans += 7;
                else
                    ans += 4;
            }
            if (ans >= l){
                if (ans <= r)
                    sum += (ans-old)*ans;
                else{
                    sum += (r-old)*ans;
                    printf("%I64d\n", sum);
                    return 0;
                }
                old = ans;
            }
        }
    }
    return 0;
}
