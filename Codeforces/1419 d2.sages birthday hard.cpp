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
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int n, k, i, a, b, c=0, d, mx=0;
    int ar[100005];
    vector<int> v;
    vector<int> u;
    cin>>n;
    for ( i = 0; i < n; i++){
        si(ar[i]);
    }
    sort(ar, ar+n);
    a= (n/2)-1;
    b = n-1;
    while (a>=0){
        if(ar[b]>ar[i] && ar[b-1]>ar[i]){
            v.push_back(ar[b]);
            v.push_back(ar[a]);
            a--;
            b--;
            mx++;
        }
        else{
            u.push_back(ar[a]);
            a--;
        }
    }
    while (b >= (n / 2))
    {
        u.push_back(ar[b]);
        b--;
    }
    if(n==2) mx =0;
    cout<<mx<<endl;
    for ( i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    for ( i = 0; i < u.size(); i++)
    {
        cout<<u[i]<<" ";
    }
    cout<<endl;
    return 0;
}
// 1.11-1.20 stop