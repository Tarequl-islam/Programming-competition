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
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
ll GCD(ll a, ll b) { return (a % b) == 0 ? b : GCD(b, a % b); }
ll mod(ll x) { return ((x % M + M) % M); }
bool cmp(const pii &left, const pii &right){
    return left.first > right.first || (left.first == right.first && left.second < right.second);
}
int main(){
    ll n, m, a, b, c, i, j, k, mx = 0, a1,a2,a3;
    ll ar[100005]={0};
    cin>>n>>m;
    for (i = 0; i < m; i++){
        int p[5]={0};
        scanf("%I64d %I64d %I64d", &a, &b, &c);
        if(ar[a]==0 && ar[b]==0 && ar[c]==0){
            ar[a]=1; ar[b]=2; ar[c]=3;
        }
        else{
            p[ar[a]]++;
            p[ar[b]]++;
            p[ar[c]]++;
            if(ar[a]==0){ 
                ar[a]= (p[1]?(p[2]? 3:2):1);
                p[ar[a]]++;
            }
            if(ar[b]==0){ 
                ar[b]= (p[1]?(p[2]? 3:2):1);
                p[ar[b]]++;
            }
            if(ar[c]==0){ 
                ar[c]= (p[1]?(p[2]? 3:2):1);
                p[ar[c]]++;
            }
        }
    }
    for ( i = 1; i <=n; i++){
        printf("%I64d ",ar[i]);
    }
    return 0;
}
