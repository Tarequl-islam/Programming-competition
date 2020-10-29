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
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t, cs = 1;
    cin >> t;
    while (t--){
        int n, m, a, b, c, i, j, k, mx = 0, mn = 1e9;
        string ar[2000];
        int bs[2000]={0};
        cin>>n;
        for ( i = 0; i < n; i++)
            cin>>ar[i];
        if(ar[0][1]==ar[1][0] && ar[n-1][n-2]==ar[n-2][n-1]){
            if(ar[0][1]!=ar[n-1][n-2]) cout<<0<<endl;
            else{
                cout<<2<<endl;
                cout<<1<<" "<<2<<endl;
                cout<<2<<" "<<1<<endl;
            }
        }
        else if(ar[0][1]==ar[1][0] && ar[n-1][n-2]!=ar[n-2][n-1]){
            if(ar[0][1]==ar[n-1][n-2]){
                cout<<1<<endl;
                cout<<n<<" "<<n-1<<endl;
            }
            else{
                cout<<1<<endl;
                cout<<n-1<<" "<<n<<endl;
            }
        }
        else if(ar[0][1]!=ar[1][0] && ar[n-1][n-2]==ar[n-2][n-1]){
            if(ar[0][1]==ar[n-1][n-2]){
                cout<<1<<endl;
                cout<<1<<" "<<2<<endl;
            }
            else{
                cout<<1<<endl;
                cout<<2<<" "<<1<<endl;
            }
        }
        else{
            if(ar[0][1]==ar[n-1][n-2]){
                cout<<2<<endl;
                cout<<1<<" "<<2<<endl;
                cout<<n-1<<" "<<n<<endl;
            }
            else{
                cout<<2<<endl;
                cout<<2<<" "<<1<<endl;
                cout<<n-1<<" "<<n<<endl;
            }
        }
    }
    return 0;
}
