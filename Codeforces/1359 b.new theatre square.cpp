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
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t, cs = 1;
    cin >> t;
    while (t--){
        ll n, m, x, y, a =0,b,c,d, i, j, mx = 0, mn = 0;
        string ar[1005];
        cin>>n>>m>>x>>y;
        for ( i = 0; i < n; i++){
            cin>>ar[i];
        }
        if(x <= (double)y/2.0) a=1;
        for ( i = 0; i < n; i++){
            for ( j = 0; j < m; j++){
                if(a==1){
                    if(ar[i][j]=='.') mx+=x;
                }
                else{
                    if(ar[i][j]=='.' && ar[i][j+1]=='.'){ 
                        mx+=y;
                        j++;
                    }
                    else if(ar[i][j]=='.' && ar[i][j+1]!='.'){
                        mx+=x;
                    }
                }
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}