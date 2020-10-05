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
vl tp;
bool bs[1000005];
void tsieve(){
    ll n = 1000001;
    bs[0]=bs[1]=1;
    for(ll i=2; i<n; i++){
        if(bs[i]==0){
            for(ll j= i*i; j<n; j+=i) 
                bs[j]=1;
            tp.push_back(i*i);
        }
    }
}
//03.41am - 04.55am
int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll n, i, j, mx=0, mn=2222222;
    ll ar[100005];
    sl(n);
    for (i = 0; i < n; i++){
        sl(ar[i]);
    }
    tsieve();
    for (i = 0; i < n; i++){
        if (binary_search(tp.begin(), tp.end(), ar[i]))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
