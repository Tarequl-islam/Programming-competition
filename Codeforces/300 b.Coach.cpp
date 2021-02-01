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
int G[50][50];
int ok[50];
int vis[50];
vi v;
int bfs(int at, int n){
    vis[at]=1;
    v.pb(at);
    int ans =0;
    for (int i = 1; i <= n; i++){
        if(G[at][i]==1)
            if(vis[i]==0) ans+=bfs(i,n);
    }
    return ans+1;
}

int main(){
    int n, m, a, b, c, i, j, k, mx = 0, mn = 0;
    cin>>n>>m;
    vector<int> ar[50];
    vector<int>br;
    for (i = 0; i < m; i++){
        cin>>a>>b;
        G[a][b]=1;
        G[b][a]=1;
    }
    for ( i = 1; i <= n; i++){
        memset(vis, 0, sizeof(vis));
        v.clear();
        c = bfs(i, n);
        if(c>1){
            if(c>3){
                mx=1;
                break;
            }
            if(ok[i]==1) continue;
            while(!v.empty()){
                ar[mn].push_back(v.back());
                ok[v.back()]=1;
                v.pop_back();
            }
            mn++;
        }
        else br.push_back(i);
    }
    if(n%3!=0 || mx==1 || mn>n/3){
        cout<<-1<<endl;
        return 0;
    }
    for ( i = 0; i <n/3; i++){
        if(mn>i){
            if(ar[i].size()==3){
                cout<<ar[i][0]<<" "<<ar[i][1]<<" "<<ar[i][2]<<endl;
            }
            else{
                cout<<ar[i][0]<<" "<<ar[i][1]<<" "<<br.back()<<endl;
                br.pop_back();
            }
        }
        else{
            cout<<br.back()<<" ";
            br.pop_back();
            cout<<br.back()<<" ";
            br.pop_back();
            cout<<br.back()<<endl;
            br.pop_back();
        }
    }
    return 0;
}
