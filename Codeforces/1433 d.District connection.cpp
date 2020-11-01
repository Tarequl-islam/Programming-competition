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
bool cmp(const pii &left, const pii &right){
    return left.second < right.second;
}
int main(){
    int t, cs = 1;
    cin >> t;
    while (t--){
        int n, m, a=0, b, c, i, j=0, k, mx = 0;
        int ar[5050];
        cin>>n;
        for ( i = 0; i < n; i++){
            si(ar[i]);
            if(i>0 && ar[i]!=ar[i-1]) a=1;
        }
        if(a==0) cout<<"NO\n";
        else{
            cout<<"YES\n";
            for ( i = 1; i < n; i++){
                if(ar[0]!=ar[i]) cout<<1<<" "<<i+1<<endl;
            }
            while (ar[0]==ar[j]){
                j++;
            }
            for ( i = 1; i < n; i++){
                if(ar[i]==ar[0]) cout<<j+1<<" "<<i+1<<endl;
            }
        }
    }
    return 0;
}
