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
    // freopen("input.txt", "r", stdin); start 10.32am - end 11.21am
    // freopen("output.txt", "w", stdout);
    int t, cs = 1;
    cin >> t;
    while (t--){
        int n, m, a, b, c=1, i, j=0,k=0, mx = 0, mn = -1e9;
        int ar[305][305];
        cin>>n>>m;
        for ( i = 0; i < n; i++){
            for ( j = 0; j < m; j++)
                si(ar[i][j]);
        }
        for ( i = 0; i < m; i++){
            if(i==0 || i==m-1){
                if(ar[0][i]>2 || ar[n-1][i]>2){
                    k=1;
                    break;
                }
                else{
                    ar[0][i]=2;
                    ar[n-1][i]=2;
                }
            }
            else if(ar[0][i]>3 || ar[n-1][i]>3){
                k=1;
                break;
            }
            else{
                ar[0][i]=3;
                ar[n-1][i]=3;
            }
        }
        for ( i = 1; i < n-1; i++){
            for ( j = 0; j < m; j++){
                if(j==0 || j==m-1){
                    if (ar[i][j] > 3){
                        k = 1;
                        break;
                    }
                    else{
                        ar[i][j]=3;
                    }
                }
                else if (ar[i][j] > 4){
                    k = 1;
                    break;
                }
                else{
                   ar[i][j]=4; 
                }
            }
        }
        if(k==1) cout<<"NO\n";
        else{
            cout<<"YES\n";
            for (i = 0; i < n; i++){
                for (j = 0; j < m; j++){
                    cout<<ar[i][j]<<" ";
                }
                cout<<endl;
            }
        }
    }
    return 0;
}
