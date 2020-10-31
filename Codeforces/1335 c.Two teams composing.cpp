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
        int n, m, tr=0, o=0, y=0, i, j, k, mx = 0;
        set<int> ss;
        int p[200005]={0};
        int ar[200005];
        cin >> n;
        for ( i = 0; i < n; i++){
            si(ar[i]);
            p[ar[i]]++;
            if(p[ar[i]]>mx){ 
                mx = p[ar[i]];
                y = i;
            }
            ss.insert(ar[i]);
        }
        if(ss.size()<mx) cout<<ss.size()<<endl;
        else{
            if(ss.end()!=ss.find(ar[y]) && mx==ss.size())
                cout<<mx-1<<endl;
            else cout<<mx<<endl;
        }
    }
    return 0;
}
