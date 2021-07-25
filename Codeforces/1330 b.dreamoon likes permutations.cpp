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
    return left.first > right.first || (left.first == right.first && left.second < right.second); }
//int find(int x) { return (p[x] == x ? x : p[x] = find(p[x])); } //p[find(i)]=find(j);

int main(){ //s: 0.0 am - e: 0.00am;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t=1, cs = 1;
    cin >> t;
    while (t--){
        ll n, m, a, b, c, d, i, j, k, mx = 0, mn = 0;
        ll ar[200005], p[200005]={0};
        cin>>n;
        for (i = 0; i < n; i++){
            sl(ar[i]);
        }
        ll no=0, no2=0;
        for (i = 0; i < n; i++){
            if (p[ar[i]] !=0){
                if(mx>i) no=1;
                a=i;
                break;
            }
            p[ar[i]] = 1;
            mx = max(mx, ar[i]);
        }
        CLR(p,0);
        mx=0;
        for (i; i < n; i++){
            if (p[ar[i]] !=0){
                no = 1;
                break;
            }
            p[ar[i]] = 1;
            mx = max(mx, ar[i]);
        }
        if(mx>n-a) no=1;
        b=n-a;
        CLR(p, 0);
        mx=0;
        for (i = n-1; i >= 0; i--){
            if (p[ar[i]] !=0){
                if(mx>n-i-1) no2=1;
                c=n-i-1;
                break;
            }
            p[ar[i]] = 1;
            mx = max(mx, ar[i]);
        }
        CLR(p,0);
        mx=0;
        for (i; i >= 0; i--){
            if (p[ar[i]] ==0){
                p[ar[i]]=1;
                mx = max(mx, ar[i]);
            }
            else{
                no2=1;
                break;
            }
        }
        if(mx>n-c) no2=1;
        d=n-c;
        if(no && no2) cout<<0<<endl;
        else{
            if(no==0 && no2==0 && a!=d){ 
                cout<<2<<endl;
                cout<<a<<" "<<b<<endl;
                cout<<d<<" "<<c<<endl;
            }
            else{
                cout<<1<<endl;
                if(no==0) cout<<a<<" "<<b<<endl;
                else cout<<d<<" "<<c<<endl;
            }
        }
    }
    return 0;
}
