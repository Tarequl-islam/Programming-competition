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
typedef pair<int, pair<int, int>> pipii;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
ll GCD(ll a, ll b) { return (a % b) == 0 ? b : GCD(b, a % b); }
ll mod(ll x) { return ((x % M + M) % M); }
bool cmp(const pipii &left, const pipii &right){
    return left.first > right.first;
}
int main(){
    // s: 02.10am - e: 
    int t, cs = 1;
    cin >> t;
    while (t--){
        int n, m, a, b, c, i, j, k=0, mx = 0, gc=0;
        int ar[1005], p[1005]={0};
        vi v;
        cin>>n;
        for (i = 0; i < n; i++){
            si(ar[i]);
            if(ar[i]>ar[mx]) mx=i;
        }
        gc=ar[mx];
        ar[mx]=0;
        v.pb(gc);
        for (i = 1; i < n; i++){
            mx=0;
            for ( j = 0; j < n; j++){
                if(ar[j]==0) continue;
                b = GCD(gc, ar[j]);
                if(b>mx){ 
                    mx = b;
                    k=j;
                }
            }
            v.pb(ar[k]);
            ar[k]=0;
            gc=mx;
        }
        for ( i = 0; i < v.size(); i++)
            cout<<v[i]<<" ";
        cout<<endl;
    }
    return 0;
}
