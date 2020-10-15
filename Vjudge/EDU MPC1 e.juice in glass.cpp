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
//#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
int main(){
    int t, cs=1;
    cin>>t;
    while (t--){
        int r1, r2, h, p;
        long double a, b, c, d, PI;
        PI = 2.0 * acos(0.0);
        cin>>r1>>r2>>h>>p;
        c = r2 + (r1-r2) * ((long double)p/h);
        d = (c*c + c*r2 + r2*r2) *(PI*p*1/3.0);
        cout<<"Case "<<cs++<< ": "<<d<<endl;
    }
    return 0;
}
