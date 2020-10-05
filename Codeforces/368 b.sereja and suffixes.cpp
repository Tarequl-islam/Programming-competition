#include<bits/stdc++.h>
using namespace std;
#define fo(i, n) for (i = 0; i < n; i++)
#define ll long long
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%I64d", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%I64d\n", x)
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
int p[100005];
int elm[100005];
//01.25am - 02.03am
int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n,m,a, i, j, mx=0, mn=2222222;
    int ar[100005];
    si(n);
    si(m);
    for (i = 0; i < n; i++){
        si(ar[i]);
    }
    for (i = n-1; i >=0; i--){
        if(p[ar[i]]==0){
            p[ar[i]]=1;
            mx++;
        }
        elm[i + 1] = mx;
    }
    for (i = 0; i < m; i++){
        si(a);
        pi(elm[a]);
    }
    return 0;
}
