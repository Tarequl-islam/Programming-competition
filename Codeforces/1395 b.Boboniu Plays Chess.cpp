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
    int n, m, a, b, c=0, x, y, i, j, k, mx = 0;
    cin>>n>>m>>x>>y;
    for ( i = y; i <= m; i++)
        cout<<x<<" "<<i<<endl;
    for ( i = y-1; i >=1; i--)
        cout<<x<<" "<<i<<endl;
    for (j = x-1; j >= 1; j--){
        for ( i = 1; i <= m; i++){
            cout<<j<<" "<<i<<endl;
        }
        j--; c=1;
        if(j<1) break;
        for (i = m; i >= 1; i--){
            cout<<j<<" "<<i<<endl;
        }
        c=0;
    }
    for (j = x+1; j <= n; j++){
        if(c==0){
            for ( i = 1; i <= m; i++){
                cout<<j<<" "<<i<<endl;
            }
            j++;
        }
        if(j>n) break;
        for (i = m; i >= 1; i--){
            cout<<j<<" "<<i<<endl;
        }
        c=0;
    }
    return 0;
}
