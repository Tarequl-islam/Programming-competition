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
    int n, m, a, b, c, i, j, k, tmp=0;
    ll mx = 0;
    vpii ar;
    cin>>n>>m;
    for (i = 0; i < n; i++){
        scanf("%d %d", &a, &b);
        ar.push_back(mp(a,b));
    }
    for ( i = 1; i <= 3001; i++){
        int t=0;
        for ( j = 0; j < n; j++){
            if(ar[j].first==i){
                t+=ar[j].second;
            }
        }
        if(t+tmp>m){
            mx+=m;
            tmp=(tmp>m?t:(tmp+t)-m);
        }
        else{
            mx+=t+tmp;
            tmp = 0;
        }
    }
    cout<<mx<<endl;
    return 0;
}
