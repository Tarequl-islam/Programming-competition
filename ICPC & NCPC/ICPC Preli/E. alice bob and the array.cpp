#include<bits/stdc++.h>
using namespace std;
#define fo(i, n) for (i = 0; i < n; i++)
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
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
#define CLR(a, b) memset(a, b, sizeof(a))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 2*acos(0.0)
#define M 998244353
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
const int MOD = 1000 * 1000 * 1000 + 7;
const int MAXN = 10 * 1000 * 1000 + 10, MAXV = 4;

int main(){
    int t=1, cs = 1;
    cin >> t;
    while (t--){
        int n, m, a, b, c, i, j, k=0, mx=0, swap=0, tmp=-1000000;
        int ar[100005];
        cin>>n;
        for(i=0; i<n; i++){
            si(ar[i]);
            if(ar[i]>0) mx+=ar[i];
            if(ar[i]>tmp) tmp=ar[i];
        }
        while(ar[k]<=0) k++;
        j=n-1;
        while(ar[j]<=0) j--;

        for(i=k; i<=j; i++){
            if(ar[i]<0){
                while(ar[i+1]<=0) i++;
                swap++;
            }
        }
        if(tmp<=0) printf("Case %d: %d %d\n", cs++, tmp, 0);
        else printf("Case %d: %d %d\n", cs++, mx, swap);
    }
    return 0;
}
