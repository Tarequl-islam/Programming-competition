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
ll GCD(ll a, ll b) { return (a % b) == 0 ? b : GCD(b, a % b); }
ll mod(ll x) { return ((x % M + M) % M); }
bool cmp(const pii &left, const pii &right){
    return left.first > right.first || (left.first == right.first && left.second < right.second);
}
int main(){
    int n, m, p1,p2,p3,t1,t2, i, j, k, mx = 0;
    vpii v;
    cin>>n>>p1>>p2>>p3>>t1>>t2;
    for (i = 0; i < n; i++){
        cin>>j>>k;
        v.push_back(mp(j,k));
    }
    sort(v.begin(), v.end());
    for (i = 0; i < n-1; i++){
        mx+=(v[i].second-v[i].first)*p1;
        if(v[i+1].first>v[i].second+t1){ 
            mx+=t1*p1;
            if(v[i+1].first>v[i].second+t1+t2){
                mx+=t2*p2;
                mx+=(v[i+1].first-(v[i].second+t1+t2))*p3;
            }
            else mx+=(v[i+1].first-(v[i].second+t1))*p2;
        }
        else mx+=(v[i+1].first-v[i].second)*p1;
    }
    mx+=(v[n-1].second-v[n-1].first)*p1;
    cout<<mx<<endl;
    
    return 0;
}
