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
bool cmp(const ll &a, const ll &b){
    return abs(a) > abs(b);
}
int main(){
    // freopen("input.txt", "r", stdin); start- -end 11.47 am
    // freopen("output.txt", "w", stdout);
    int t, cs = 1;
    cin >> t;
    while (t--){
        int n, x, a, b, i, j=0, mx = 0, mn = -1e9;
        ll k=0;
        cin>>n;
        int ar[n+5];
        vector<int> v;
        for ( i = 0; i < n; i++){
            si(ar[i]);
        }
        for ( i = 0; i < n; i++){
            if(ar[i]>=0){
                mx=ar[i];
                while (ar[i+1]>=0 &&i+1<n){
                    i++;
                    if(ar[i]>mx) mx= ar[i];
                }
                v.push_back(mx);
            }
            else if(ar[i]<0){
                mx=ar[i];
                while (ar[i+1]<0 &&i+1<n){
                    i++;
                    if(ar[i]>mx) mx= ar[i];
                }
                v.push_back(mx);
            }
        }
        for ( i = 0; i < v.size(); i++) k+=v[i];
        cout<<k<<endl;
    }
    return 0;
}
