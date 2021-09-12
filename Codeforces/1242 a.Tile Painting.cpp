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
    int t=1, cs = 1;
    //cin >> t;
    while (t--){
        ll n, m, a, b, c, i, j, k, mx = 0, mn = 1e18;
        cin>>n;
        if(n==1) cout<<1<<endl;
        else{
            a = sqrt(n);
            mn = n;
            ll od = 0;
            ll od2 =0;
            ll ev = 0;
            for (i = 2; i <= a; i++){
                if(n%i==0){
                    b = n/i;
                    if(i%2==0) ev = 1;
                    else od = i;
                    if(od!=0){
                        if(od2==0){
                            od2 = od;
                            od = 0;
                        }
                        else if(max(od, od2)%min(od, od2)==0){
                            od = 0;
                        }
                        else mx = 1;
                    }
                    if(b%2==0) ev = 1;
                    else od = b;
                    if(od!=0){
                        if(od2==0){
                            od2 = od;
                            od = 0;
                        }
                        else if(max(od, od2)%min(od, od2)==0){
                            od = 0;
                        }
                        else mx = 1;
                    }
                    mn = min(mn, min(i, n/i));
                }
            }
            if(n%2==0){
                if(od == 0 && od2 == 0) cout<<2<<endl;
                else cout<<1<<endl;
            }
            else{
                if(mx == 1) cout<<1<<endl;
                else cout<<mn<<endl;
            }
        }
    }
    return 0;
}
