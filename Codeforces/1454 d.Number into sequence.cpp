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
ll isDivisible(ll n){
    if(n>3){
        for (ll i = 2; i*i <= n; i++){
            if(n%i==0) return i;
        }
    }
    return n;
}
int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t, cs = 1;
    cin >> t;
    while (t--){
        ll n, m, a, b, c, i, j, mx = 0, mn = 2222222;
        vector<ll>vec, ans;
        cin>>n;
        if (n>3){
            for (ll i = 2; i * i <= n; i++){
                m = n;
                if (m % i == 0){
                    vec.push_back(i);
                    m /= i;
                    while (m % i == 0){
                        vec.push_back(i);
                        m /= i;
                    }
                    vec[vec.size() - 1] *= m;
                    if (vec.size() > mx){
                        ans = vec;
                        mx = vec.size();
                    }
                    vec.clear();
                }
            }
            if(ans.size()==0) ans.push_back(n);
        }
        else ans.push_back(n);
        cout<<ans.size()<<endl;
        for ( i = 0; i < ans.size(); i++){
            printf("%lld ", ans[i]);
        }
        cout<<endl;
    }
    return 0;
}
