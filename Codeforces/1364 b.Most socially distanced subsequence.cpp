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
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t, cs = 1;
    cin >> t;
    while (t--){
        int n, m, a, b, c, i, j, k, mx = 0, mn = 1e18;
        int ar[100005];
        vector<int> v;
        cin>>n;
        for (i = 0; i < n; i++){
            si(ar[i]);
        }
        v.push_back(ar[0]);
        for (i = 0; i < n-1; i++){
            if (ar[i] > ar[i + 1] && i<n-1){
                while(ar[i]>ar[i+1] && i<n-1) i++;
                v.push_back(ar[i]);
            }
            if (ar[i] < ar[i + 1] && i<n-1){
                while(ar[i]<ar[i+1] && i<n-1) i++;
                v.push_back(ar[i]);
                if(i<n-1) i--;
            }
        }
        cout<<v.size()<<endl;
        for ( i = 0; i < v.size(); i++)
            cout<<v[i]<<" ";
        cout<<endl;
        
    }
    return 0;
}
