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
bool cmp(const ll &a, const ll &b){
    return abs(a) > abs(b);
}
int main(){
    int t, cs = 1;
    cin >> t;
    while (t--){
        int n, x, a, b,aa, bb, i, j=0, mx = 0, ans=0, mn = -1e9;
        cin>>n;
        vpii v;
        for ( i = 0; i < n; i++){
            scanf("%d %d", &a, &b);
            v.push_back(make_pair(a, b));
        }
        a = v[0].first;
        b = v[0].second;
        if(a<b) ans=1;
        for ( i = 1; i < n; i++){
            aa = v[i].first;
            bb = v[i].second;
            if(aa-a < bb-b || aa<a || bb<b){
                ans =1;
                break;
            }
            a = aa; b = bb;
        }
        if(ans==1) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}