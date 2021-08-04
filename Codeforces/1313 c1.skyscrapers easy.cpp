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

int main(){ //s: 0.0 am - e: 02.07am;
    int t=1, cs = 1;
    //cin >> t;
    while (t--){
        ll n, m, a, b, c, i, j, k, mx=0, mn=0, ans=0;
        ll ar[1005];
        cin>>n;
        for (i = 0; i < n; i++){
            sl(ar[i]);
        }
        for (i = 0; i < n; i++){
            j = i-1; k=i+1;
            mn = mx = ar[i];
            while(j>=0){
                if(ar[j]<=mn){
                    mx+=ar[j];
                    mn = ar[j];
                }
                else mx += mn;
                j--;
            }
            mn = ar[i];
            while(k<n){
                if(ar[k]<=mn){
                    mx += ar[k];
                    mn = ar[k];
                }
                else mx += mn;
                k++;
            }
            if(mx> ans){
                ans = mx;
                c = i;
            }
            mx=0;
        }
        vl v, v2;
        j = c-1; k=c+1;
        mn = mx = ar[c];
        v.push_back(ar[c]);
        while(j>=0){
            if(ar[j]<=mn){
                v.push_back(ar[j]);
                mn = ar[j];
            }
            else v.push_back(mn);
            j--;
        }
        while(k<n){
            if(ar[k]<=mx){
                v2.push_back(ar[k]);
                mx = ar[k];
            }
            else v2.push_back(mx);
            k++;
        }
        reverse(v.begin(), v.end());
        for(i=0; i<v.size(); i++) cout<<v[i]<<" ";
        for(i=0; i<v2.size(); i++) cout<<v2[i]<<" ";
    }
    return 0;
}
