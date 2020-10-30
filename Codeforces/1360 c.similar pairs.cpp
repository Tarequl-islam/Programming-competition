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
    return left.first > right.first || (left.first == right.first && left.second < right.second);
}
int main(){
    // freopen("input.txt", "r", stdin); 43
    // freopen("output.txt", "w", stdout);
    int t, cs = 1;
    cin >> t;
    while (t--){
        int n, m, e=0, o=0, y=0, i, j, k, mx = 0;
        int ar[105];
        vi v;
        cin>>n;
        for ( i = 0; i < n; i++){ 
            si(ar[i]); 
            if(ar[i]%2==0) e++;
            else o++;
        }
        sort(ar, ar+n);
        if(e%2 != o%2){
            cout<<"NO\n";
        }
        else{
            if(e%2==0 && o%2==0) cout<<"YES\n";
            else{
                for ( i = 0; i < n-1; i++){
                    if(ar[i]+1==ar[i+1]){
                        cout<<"YES\n";
                        y=1;
                        break;
                    }
                }
                if(y==0) cout<<"NO\n";
            }
        }
    }
    return 0;
}
