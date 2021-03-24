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

const ll mx=1<<18;
ll ar[mx];
ll tree[mx*3];
void init(int node, int b, int e, int c){
    if(b==e) tree[node]=ar[b];
    else{
        int mid = (b+e)/2;
        init(node*2, b, mid, c^1);
        init(node*2+1, mid+1, e, c^1);
        if(c) tree[node]=tree[node*2] | tree[node*2+1];
        else tree[node]=tree[node*2] ^ tree[node*2+1];
    }
}
void update(int node, int b, int e, int i, int newvalue, int c){
    if (b == e) tree[node] = newvalue;
    else{
        int mid = (b + e) / 2;
        if(i<=mid) update(node*2, b, mid, i, newvalue, c^1);
        else update(node*2+1, mid + 1, e, i, newvalue, c^1);
        if(c) tree[node]=tree[node*2] | tree[node*2+1];
        else tree[node]=tree[node*2] ^ tree[node*2+1];
    }
}

int main(){
    int n,m,b,p, c;
    cin>>n>>m;
    c=(n%2);
    n=(1<<n);
    for(int i=1; i<=n; i++) cin>>ar[i];
    init(1,1,n, c);
    for(int i=1; i<=m; i++){
        cin>>b>>p;
        update(1, 1, n, b, p, c);
        cout<<tree[1]<<endl;
    }
    return 0;
}
