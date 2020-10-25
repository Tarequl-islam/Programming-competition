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
int s[105][105];
int main(){
    int t, cs = 1;
    cin >> t;
    while (t--){
        ll n, m, a,b,c,d, i, j=1, mx = 0, mn = 0;
        char s[105][105];
        cin>>n>>m;
        if(n&1 && m&1){
            for ( i = 0; i < n; i++){
                if(i%2==0){
                    for ( j = 0; j < m-1; j+=2){
                        cout<<"BW";
                    }
                    cout<<"B";
                }
                else{
                    for (int k =0; k < m-1; k+=2){
                        cout<<"WB";
                    }
                    cout<<"W";
                }
                cout<<endl;
            }
        }
        else{
            for ( i = 0; i < n; i++){
                if(i%2==0){
                    for (int k =0; k < m; k++){
                        if(i==0 && k==0) cout<<"B";
                        else if(k%2==0) cout<<"W";
                        else cout<<"B";
                    }
                }
                else{
                    for ( j = 0; j < m; j++){
                        if(j%2==0) cout<<"B";
                        else cout<<"W";
                    }
                }
                cout<<endl;
            }
        }
    }
    return 0;
}

