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
    ll n, m, a, b, c, i, j, mx=0, ans=-1;
    int ar[105][105];
    int p[5];
    n=5;
    for (i = 0; i < n; i++){
        for ( j = 0; j < n; j++){
            cin >> ar[i][j];
        }
    }
    for (i = 0; i < n; i++) p[i]=i;
    do{
        mx=ar[p[0]][p[1]]+ar[p[1]][p[0]]+ar[p[2]][p[3]]+ar[p[3]][p[2]]+ ar[p[1]][p[2]]+ar[p[2]][p[1]]+ar[p[3]][p[4]]+ar[p[4]][p[3]]+ ar[p[2]][p[3]]+ar[p[3]][p[2]]+ ar[p[3]][p[4]]+ar[p[4]][p[3]];
        if(mx>ans) ans=mx;
    } while (next_permutation(p, p+n));
    
    cout <<ans<< endl;
    return 0;
}
