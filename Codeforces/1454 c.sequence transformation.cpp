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
        int n, m, a, b, c, i, j, mx = 0, mn = 2222222;
        set<int> ss;
        si(n);
        int ar[n+5], p[n+5] = {0};
        ar[0]=-1;
        for ( i = 1; i <= n; i++){
            si(ar[i]);
            if(ar[i]==ar[i-1]) continue;
            p[ar[i]]++;
            ss.insert(ar[i]);
        }
        c = ss.size();
        if(c==1){
            cout<<0<<endl;
        }
        else if(p[ar[1]]==1 || p[ar[n]]==1 || (ar[1] == ar[n] && p[ar[1]] == 2)){
            cout<<1<<endl;
        }
        else{
            p[ar[1]]--;
            p[ar[n]]--;
            for (auto i = ss.begin(); i != ss.end(); i++){
                if(p[*i]<mn){ 
                    mn= p[*i];
                }
            }
            cout<<mn+1<<endl;
        }
    }
    return 0;
}
