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
        int ar[205];
        int bs[2000]={0};
        cin>>n;
        for ( i = 1; i <= n; i++)
            si(ar[i]);
        sort(ar+1, ar+n+1);
        for ( i = 1; i <= n; i++){
            if(bs[ar[i]]==0) bs[ar[i]]=1;
            else{
                a = b = ar[i];
                while(bs[a]==1 && a>=1) a--;
                while(bs[b]==1) b++;
                if(ar[i]-a <= b-ar[i] && a!=0){
                    mx += (ar[i]-a);
                    bs[a]=1;
                }
                else{
                    mx += (b-ar[i]);
                    bs[b] = 1;
                }
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}
