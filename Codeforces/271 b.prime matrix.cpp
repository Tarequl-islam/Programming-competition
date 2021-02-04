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

int p[100055];
void prime(){
    ll i=0, j=0;
    p[0]=p[1]=1;
    for ( i = 2; i <=100010; i++){
        if(p[i]!=1){
            for ( j = i*i; j <= 100010; j+=i){
                p[j]=1;
            }
        }
    }
}
int main(){
    int n, m, a, b, c, i, j, k, mx = 0, mn=0, ans=INT_MAX;
    int ar[505][505], br[505][505];
    cin>>n>>m;
    for (i = 0; i < n; i++){
        for(j=0;j<m; j++) si(ar[i][j]);
    }
    prime();
    memset(br, 0, sizeof(br));
    for (i = 0; i < n; i++){
        mx=0;
        for(j=0; j<m; j++){
            mn=0;
            if(p[ar[i][j]]==1){
                while(p[ar[i][j]+mn]==1){
                    mn++;
                }
            }
            br[i][j]=mn;
            mx+=mn;
        }
        ans=min(ans, mx);
    }
    for (i = 0; i < m; i++){
        mx=0;
        for(j=0; j<n; j++){
            mx+=br[j][i];
        }
        ans=min(ans, mx);
    }
    cout<<ans<<endl;
    return 0;
}
