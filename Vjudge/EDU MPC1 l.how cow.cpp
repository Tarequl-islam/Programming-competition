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
    int t, cs=1;
    cin>>t;
    while (t--){
        int x1, x2, y1, y2, m, a, b, c=0;
        int x[105], y[105];
        cin>>x1>>y1>>x2>>y2;
        cin>>m;
        for (int i = 0; i < m; i++){
            cin>>x[i]>>y[i];
        }
        cout<<"Case "<<cs++<< ":\n";
        for (int i = 0; i < m; i++){
            if(x[i]>= x1 && y[i]>=y1 && x[i]<=x2 && y[i]<=y2)
                cout<<"Yes\n";
            else cout<<"No\n";
        }
    }
    return 0;
}
