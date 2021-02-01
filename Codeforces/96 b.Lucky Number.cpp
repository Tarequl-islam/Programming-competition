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
    ll m, a, b, c, i, j, x,y, mx = 0, mn = 1e18;
    vi v;
    string n, s="", ss;
    cin>>n;
    a=n.length();
    b=a;
    for(i=0;i<b/2;i++){
        if(n[i]!='7'){
            if(n[i]>'7') mx=1;
            break;
        }
        else if(i==b/2-1){ 
            for(j=i+1;j<b;j++){
                if(n[j]>'4') mx=1;
                else if(n[j]<4)break;
            }
        }
    }
    if(a%2!=0 || mx==1){
        if(mx==1) a++;
        a++;
        for(i=0; i<a/2;i++) s+='4';
        for(i=0; i<a/2;i++) s+='7';
        cout<<s<<endl;
    }
    else{
        for(i=0; i<a/2;i++) s+='4';
        for(i=0; i<a/2;i++) s+='7';
        int x= 1;
        while(x){
            if(s>=n){
                cout<<s<<endl;
                break;
            }
            x=next_permutation(s.begin(), s.end());
        }
    }
    return 0;
}
