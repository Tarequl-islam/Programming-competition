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
ll GCD(ll a, ll b) { return (a % b) == 0 ? b : GCD(b, a % b); }
ll mod(ll x) { return ((x % M + M) % M); }
bool cmp(const pii &left, const pii &right){
    return left.first > right.first || (left.first == right.first && left.second < right.second); }
//int find(int x) { return (p[x] == x ? x : p[x] = find(p[x])); } //p[find(i)]=find(j);

int main(){ //s: 0.0 am - e: 0.00am;
    int t=1, cs = 1;
    cin >> t;
    while (t--){
        ll n, m, a, b, c, i, j, k,l, mn = 0;
        long double mx =0;
        ll ar[200005];
        cin>>n;
        for (i = 0; i < n; i++){
            sl(ar[i]);
            mx+=ar[i];
        }
        mx/=(long double)n;
        mx*=2;
        sort(ar, ar+n);
        i = 0;
        j = n - 1;
        while (i < j){
            if (ar[i] + ar[j] == mx){
                k = i;
                l = j;
                while(ar[k+1]==ar[i] && k  <n-1) k++;
                while(ar[l-1]==ar[j] && l > 0) l--;
                if(k!=i || l!=j){
                    if(k<l){
                        a = 1+(k-i);
                        b = 1+(j-l);
                        mn += a*b;
                    }
                    else{
                        a = 1+(j-i);
                        mn += (a*(a-1))/2;
                    }
                    i=k+1; j = l-1;
                }
                else{ 
                    mn++;
                    i++;
                    j--;
                }

            }
            else if (ar[i] + ar[j] < mx) i++;
            else j--;
        }
        cout<<mn<<endl;
    }
    return 0;
}
