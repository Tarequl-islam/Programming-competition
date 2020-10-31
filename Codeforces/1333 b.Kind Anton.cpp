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
int main(){
    int t, cs = 1;
    cin >> t;
    while (t--){
        ll n, m, z=0, o=0, y=0, i, j, k, mx = 0;
        ll ar[100005];
        ll br[100005];
        cin>>n;
        for ( i = 0; i < n; i++){
            sl(ar[i]);
        }
        for ( i = 0; i < n; i++){
            sl(br[i]);
        }
        if(ar[0]!=br[0]) cout<<"NO\n";
        else{
            if(ar[0]==1) o = 1;
            if(ar[0]==-1) y= 1;
            for ( i = 1; i < n; i++){
                if(br[i] > ar[i]){
                    if(o!=1){
                        cout<<"NO\n";
                        mx=1;
                        break;
                    }
                }
                else if(br[i]<ar[i]){
                    if(y!=1){
                        cout<<"NO\n";
                        mx=1;
                        break;
                    }
                }
                if(ar[i]==1) o = 1;
                if(ar[i]==-1) y= 1;
            }
            if(mx==0) cout<<"YES\n";
        }
    }
    return 0;
}
