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
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t, cs = 1;
    cin >> t;
    while (t--){
        int n, a1, b1, a2, b2, c=0, d, mx=0;
        cin>>a1>>b1;
        cin>>a2>>b2;
        if(a1==a2){
            if(b1+b2 == a1) c=1;
        }
        if (b1==b2){
            if(a1+a2==b1) c=1;
        }
        if (a1==b2){
            if(a2+b1==a1) c=1;
        }
        if (b1==a2){
            if(a1+b2==b1) c=1;
        }
        if(c==1) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}
