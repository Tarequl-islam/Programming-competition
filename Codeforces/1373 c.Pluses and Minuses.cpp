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
#define PI 2*acos(0.0)
#define M 998244353
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
long long mod(long long x){
    return ((x % M + M) % M);
}
bool cmp(const pii &left, const pii &right){
    return left.first > right.first || (left.first == right.first && left.second < right.second);
}
int main(){
    //s 6.50am - e 7.47am
    int t, cs = 1;
    cin >> t;
    while (t--){
        ll n, m, a, b=0, c=0, init, j, k, res = 0, mn = 0;
        string s;
        cin>>s;
        for (int i = 0; i < s.size(); i++){
            if (s[i] == '+')c++;
            else {
                c--;
                if(c<mn){
                    mn=c;
                    res+= i+1;
                }
            }
        }
        if(mn>=0) cout<<s.length()<<endl;
        else cout<<res+s.length()<<endl;
    }
    return 0;
}
