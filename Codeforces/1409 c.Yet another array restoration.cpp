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
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
int main(){
    int t, cs = 1;
    cin >> t;
    while (t--){
        ll n, m, a, b, x, y, e=0, i, j, k, mx = 0;
        cin>>n>>x>>y;
        m = y-x;
        if(n>m){
            i = max(y-(n-1), 1LL);
            while(n--) cout<<i++<<" ";
            cout<<endl;
        }
        else{
            a = (m+n-2)/(n-1);
            while(m%a != 0) a++;
            b = y - a*n;
            while(b+a<=0) b+=a;
            while(n--){
                b += a;
                cout<<b<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
