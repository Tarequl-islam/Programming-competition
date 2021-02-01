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
    ll n, m,o, Nb,Ns,Nc,Pb,Ps,Pc,r,BB=0,SS=0,CC=0, i, mx=0;
    string s;
    cin>>s;
    cin>>Nb>>Ns>>Nc;
    cin>>Pb>>Ps>>Pc;
    cin>>r;
    for (i = 0; i < s.length(); i++){
        if(s[i]=='B') BB++;
        else if(s[i]=='S') SS++;
        else if(s[i]=='C') CC++;
    }
    m=n=o=INT_MAX;
    if(BB>0) m=Nb/BB;
    else Nb=0;
    if(SS>0) n=Ns/SS;
    else Ns=0;
    if(CC>0) o=Nc/CC;
    else Nc=0;
    mx = min(min(m, n), o);
    Nb-=BB*mx;
    Ns-=SS*mx;
    Nc-=CC*mx;
    while(r>0 && (Nb>0 || Nc>0 || Ns>0)){
        if(BB>Nb){
            r-=(BB-Nb)*Pb;
            Nb=0;
        }
        else Nb-=BB;
        if(SS>Ns) {
            r-=(SS-Ns)*Ps;
            Ns=0;
        }
        else Ns-=SS;
        if(CC>Nc) {
            r-=(CC-Nc)*Pc;
            Nc=0;
        }
        else Nc-=CC;
        if(r>=0) mx++;
    }
    i = BB*Pb + SS*Ps + CC*Pc;
    cout<<r/i + mx<<endl;
    return 0;
}
