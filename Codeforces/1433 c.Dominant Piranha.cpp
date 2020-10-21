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
    int t, cs = 1;
    cin >> t;
    while (t--){
        int n, a, b, c=0, d, mx=0;
        int ar[500005];
        cin>>n;
        ar[0]=0;
        for (int i = 1; i <= n; i++){
            cin>>ar[i];
        }
        for (int i = 1; i <= n; i++){
            if((ar[i]>ar[mx] && ar[i+1]<ar[i]) || (ar[i]>ar[mx] && ar[i-1]<ar[i] && i!=1)) mx=i;
            if(i>1 && ar[1]!=ar[i]) c=1;
        }
        if(c==0){
            cout<<-1<<endl;
        }
        else{
            cout<<mx<<endl;
        }
    }
    return 0;
}
