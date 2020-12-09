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
long long mod(long long x){
    return ((x % M + M) % M);
}
bool cmp(const pii &left, const pii &right){
    return left.first > right.first || (left.first == right.first && left.second < right.second);
}
int main(){
    int t, cs = 1;
    cin >> t;
    while (t--){
        int n, m, a, b, c, i, j=0, k, mx = 0, mn = 0;
        int ar[200005], p[200005]={0};
        cin>>n>>k;
        for (i = 0; i < n; i++){
            si(ar[i]);
        }
        p[0]=0;
        for ( i = 1; i < n-1; i++){
            if(ar[i-1] < ar[i] && ar[i] > ar[i+1]) 
                j++;
            p[i]=j;
        }
        p[n-1] = j;
        for(i = k; i <= n; i++){
            if(p[i-2]-p[i-k] > mx){
                mx = p[i-2]-p[i-k];
                mn = i-(k-1);
            }
        }
        if(mx!=0) cout<<mx+1<<" "<<mn<<endl;
        else cout<<1<<" "<<1<<endl;
    }
    return 0;
}
