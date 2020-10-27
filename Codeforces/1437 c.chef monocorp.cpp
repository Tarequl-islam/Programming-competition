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
        int ar[2000];
        int bs[2000]={0};
        cin>>n;
        for ( i = 1; i <= n; i++)
            si(ar[i]);
        sort(ar, ar+n+1);
        for (i = 1; i <= n; i++){
            if(ar[i]==ar[i+1]){
                j=1;
                while (ar[i] == ar[i + j])
                    j++;
                a = (j)/2;
                c = i;
                while(bs[c-1]==0 && a-- && c-1){ 
                    c--;
                }
                for ( k = c; k < c+j; k++){
                    mx += abs(k - ar[i]);
                    i++;
                    bs[k] = 1;
                }
                i--;
            }
            else if(bs[ar[i]]==1){
                j=1;
                while (bs[ar[i]+j]==1)
                    j++;
                mx+= j;
                bs[ar[i]+j]=1;
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}
