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

int main(){ 
    int n, m, a=0, b, c, i, j, k=1e6;
    int ar[505];
    ar[0]=0;
    cin>>n>>m;
    for (i = 1; i <= n; i++){
        si(ar[i]);
    }
    sort(ar+1, ar+n+1);
    for (i = 1; i <= n; i++){
        if(ar[i]==m) a=i;
        if(m>ar[i-1] && m<ar[i]) k=i;
    }
    b = (n+1)/2;
    if(a==b) cout<<0<<endl;
    else if(a==0){
        if(k==1) cout<<n<<endl;
        else if(k>n) cout<<n+1<<endl;
        else{
            if(k<=b){
                a=k;
                n++;
                for(i=0;i<n;i++){
                    c= (n+i+1)/2;
                    if(a+i>=c) break;
                }
                cout<<i+1<<endl;
            }
            else{
                a=k-1;
                n++;
                for(i=0;i<n;i++){
                    c= (n+i+1)/2;
                    if(a<=c) break;
                }
                cout<<i+1<<endl;
            }
        }
    }
    else if(a<= b){
        while(ar[a]==ar[a+1]) a++;
        if(a>=b) cout<<0<<endl;
        else{
            for(i=1;i<n;i++){
                c= (n+i+1)/2;
                if(a+i>=c) break;
            }
            cout<<i<<endl;
        }
    }
    else{
        while(ar[a]==ar[a-1]) a--;
        if(a<=b) cout<<0<<endl;
        else{
            for(i=1;i<n;i++){
                c= (n+i+1)/2;
                if(a<=c) break;
            }
            cout<<i<<endl;
        }
    }
    return 0;
}
