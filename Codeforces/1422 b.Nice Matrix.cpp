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
        int n, m, a, b, c, i, j;
        ll mx=0;
        int ar[105][105];
        cin>>n>>m;
        for (i = 0; i < n; i++){
            for ( j = 0; j < m; j++){
                si(ar[i][j]);
            }
        }
        for ( i = 0; i < (n)/2; i++){
            for ( j = 0; j < (m)/2; j++){
                vector<int> v;
                v.push_back(ar[i][j]);
                v.push_back(ar[i][m-(j+1)]);
                v.push_back(ar[n-(i+1)][j]);
                v.push_back(ar[n-(i+1)][m-(j+1)]);
                sort(v.begin(), v.end());
                for (int k = 0; k < v.size(); k++)
                    mx+=abs(v[k]-v[2]);
            }
        }
        if(n%2==1){
            for ( j = 0; j < m/2; j++)
                mx+=abs(ar[n/2][j]-ar[n/2][m-(j+1)]);
        }
        if(m%2==1){
            for ( i = 0; i < n/2; i++)
                mx+=abs(ar[i][m/2]-ar[n-(i+1)][m/2]);
        }
        cout<<mx<<endl;
    }
    return 0;
}
