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

int main(){ //s: 06.24am - e: 07.00am;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t, cs = 1;
    cin >> t;
    while (t--){
        ll n, m, a, b, c,d, i, j, k, mx = 0, mn = 1e18;
        ll ar[100005];
        cin>>n>>ar[1]>>ar[2]>>ar[3]>>ar[4];
        ar[5]=ar[1];
        //for (i = 1; i <= 5; i++){
            //if(n-ar[i]<2 &&ar[i+1]<=n) ar[i+1]-= 1-(n-ar[i]);
            //if(ar[i]<0 || ar[i]>n) mx=1;
            if(ar[1]+ar[3]==2*n)
                if(ar[2]<2 || ar[4]<2) mx=1;
            else if(ar[1]==n || ar[3]==n)
                if(ar[2]<1 || ar[4]<1) mx=1;
            if(ar[2]+ar[4]==2*n)
                if(ar[1]<2 || ar[3]<2) mx=1;
            else if(ar[2]==n || ar[4]==n)
                if(ar[1]<1 || ar[3]<1) mx=1;

        //}
        cout<<(mx?"NO":"YES")<<endl;
    }
    return 0;
}
