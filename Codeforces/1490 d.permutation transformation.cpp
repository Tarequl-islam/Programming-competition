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

int l=0, ar[105], p[105];
void f(int s, int e, int n){
    if(s>=e) return;
    int mx=s;
    for (int i = s; i < e; i++){
        if(ar[i]>ar[mx]) mx=i;
    }
    p[mx]=n++;
    f(s, mx, n);
    f(mx+1, e, n);
}

int main(){ //s: 06.24am - e: 07.00am;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t, cs = 1;
    cin >> t;
    while (t--){
        int n, m, a, b, c, i, j, k, mx = 0, mn = 1e18;
        cin>>n;
        for (i = 0; i < n; i++){
            sl(ar[i]);
            if(ar[i]>ar[mx]) mx=i;
        }
        f(0, n, 0);
        for (i = 0; i < n; i++){
            cout<<p[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
