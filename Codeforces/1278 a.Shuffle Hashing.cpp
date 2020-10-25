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
        ll n, a,b,c=0,d, i, j=0, mx = 0, mn = 0;
        string s, ss, h;
        cin>>s>>h;
        a = s.length();
        for ( i = 0; i < a; i++){
            mx+=(int)s[i];
            mn+=(int)h[i];
        }
        sort(s.begin(), s.end());
        for (i = 0; i <= h.length()-a && a<=h.length(); i++){
            if(mx==mn){
                c=2;
                ss = h.substr(i,a);
                sort(ss.begin(), ss.end());
                if(s!=ss) c=1;
            }
            if(c==2) break;
            mn+=(int)h[a+i];
            mn-=(int)h[i];
        }
        if(c==2) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}

