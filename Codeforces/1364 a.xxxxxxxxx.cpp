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
    // freopen("input.txt", "r", stdin); start- -end 09.42 am
    // freopen("output.txt", "w", stdout);
    int t, cs = 1;
    cin >> t;
    while (t--){
        ll n, r, a, b, ans, i, j=0,k=0, mx = 0, mn = -1e9;
        int ar[100005];
        ll p[100005]={0};
        cin>>n>>r;
        for ( i = 0; i < n; i++){
            si(ar[i]);
            mx+=1LL*ar[i];
            p[i]=mx;
        }
        if(mx%r!=0) cout<<n<<endl;
        else{
            for ( i = 0; i < n; i++){
                if((mx-p[i])%r!=0){
                    j=1;
                    ans = n-(i+1);
                    break;
                }
                else if(p[n-(i+2)]%r!=0){
                    j=1;
                    ans = n-(i+1);
                    break;
                }
            }
            if(j==0) cout<<-1<<endl;
            else cout<<ans<<endl;
        }
    }
    return 0;
}
