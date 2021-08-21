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
    ll n, k, i, a, b, c=0, d, mx=0;
    ll ar[100005];
    vector<ll> v;
    cin>>n;
    for ( i = 0; i < n; i++){
        sl(ar[i]);
    }
    sort(ar, ar+n, greater<ll>());
    a = b = (n-1)/2;
    if(n%2==0) b++;
    b++;
    for(i=0; i<a; i++){
        v.pb(ar[i]);
        v.pb(ar[b++]);
    }
    v.pb(ar[a]);
    if(n%2==0) v.pb(ar[a+1]);
    for ( i = 1; i < n-1; i++){
        if(v[i-1]>v[i] && v[i]<v[i+1]) mx++;
    }
    cout<<mx<<endl;
    for (i = 0; i < n; i++) cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}