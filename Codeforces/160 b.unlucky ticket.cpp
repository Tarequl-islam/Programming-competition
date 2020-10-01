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
// 04.30am - 04.58
int main(){
    int n, m, a, b, c, i, j, mx=0, mn=2222222;
    string s, sa, sb;
    cin>>n;
    cin>>s;
    sa = s.substr(0, n);
    sb = s.substr(n, n);
    sort(sa.begin(), sa.end());
    sort(sb.begin(), sb.end());
    if (sa[0]>sb[0]){
        for (int i = 0; i < n; i++){
            if (sa[i] <= sb[i]){
                cout<<"NO\n";
                return 0;
            }
        }
        cout<<"YES\n";
    }
    else {
        for (int i = 0; i < n; i++){
            if (sa[i] >= sb[i]){
                cout<<"NO\n";
                return 0;
            }
        }
        cout<<"YES\n";
    }
    return 0;
}
