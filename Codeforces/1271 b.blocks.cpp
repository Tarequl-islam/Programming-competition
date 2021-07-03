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

int main(){ //s: 06.24am - e: 07.00am;
    int t=1, cs = 1;
    //cin >> t;
    while (t--){
        ll n, m, a, b, c, i, j=3, k=0, l=0, ans=0,mw=0, mb=0;
        string s;
        vi v;
        cin>>n;
        cin>>s;
        for (i = 0; i < n; i++){
            if(s[i]=='W') mw++;
            else mb++;
        }
        if(mw%2!=0 && mb%2!=0) cout<<-1<<endl;
        else if(mw==0 || mb==0) cout<<0<<endl;
        else {
            while(j--){
                char cc=s[0];
                for ( i = 0; i < n-1; i++){
                    if(s[i]!=cc){
                        ans++;
                        if(l==0) v.pb(i+1);
                        else v.pb(n-(i+1));
                        s[i]=cc;
                        if(s[i+1]=='B') s[i+1]='W';
                        else s[i+1]='B';
                    }
                }
                if(s[n-1]==s[n-2]){
                    cout<<ans<<endl;
                    for(i=0; i<v.size(); i++) cout<<v[i]<<" ";
                    k=1;
                    break;
                }
                else{ 
                    reverse(s.begin(), s.end());
                    if(l==0) l=1;
                    else l=0;
                }
            }
            if(k==0) cout<<-1<<endl;
        }
    }
    return 0;
}
