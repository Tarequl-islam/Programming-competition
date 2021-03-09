#include<bits/stdc++.h>
using namespace std;
#define fo(i, n) for (i = 0; i < n; i++)
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
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
#define CLR(a, b) memset(a, b, sizeof(a))
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
const int MOD = 1000 * 1000 * 1000 + 7;
const int MAXN = 10 * 1000 * 1000 + 10, MAXV = 4;
ll GCD(ll a, ll b) { return (a % b) == 0 ? b : GCD(b, a % b); }
ll mod(ll x) { return ((x % M + M) % M); }
bool cmp(const pii &left, const pii &right){
    return left.first > right.first || (left.first == right.first && left.second < right.second);
}
string s;
void fillC(int l, int r, char c){
    for(int i=l+1; i<=r; i+=2){
        s[i]=c;
    }
}
int main(){
    int n, m, a, b, c, i, j, k,l=0,r=0, mx = 0, mx2=0;
    string sa="", sb="";
    cin>>n>>k;
    cin>>s;
    if(k==2){
        for(i=0; i<n; i++){
            if(i%2==0){
                if(s[i]!='A') mx++;
                sa+='A';
            }
            else{
                if(s[i]!='B') mx++;
                sa+='B';
            }
        }
        for(i=0; i<n; i++){
            if(i%2==0){
                if(s[i]=='A') mx2++;
                sb+='B';
            }
            else{
                if(s[i]=='B') mx2++;
                sb+='A';
            }
        }
        if(mx<mx2) cout<<mx<<endl<<sa<<endl;
        else cout<<mx2<<endl<<sb<<endl;
        return 0;
    }
    for (i = 1; i <= n; i++){
        if(s[i]==s[i-1]){
            r++;
        }
        else{
            if(r-l>=1){
                mx+=(1+r-l)/2;
                char c=s[i-1];
                if((r-l)%2==0){
                    if(c-'A'==(k-1)){
                        fillC(l, r, 'A');
                    }
                    else fillC(l, r, c+1);
                }
                else{
                    if(c-'A'==(k-1)){
                        if(s[i]=='A') fillC(l, r+1, 'B');
                        else fillC(l, r+1, 'A');
                    }
                    else{
                        if(s[i]!=c+1) fillC(l, r+1, c+1);
                        else{ 
                            if((c+2)-'A'>(k-1)) fillC(l, r+1, 'A');
                            else fillC(l, r+1, c+2);
                        }
                    }
                }
            }
            r=l=i;
        }
    }
    if(r-l>=1){
        mx+=(1+r-l)/2;
        char c=s[i-1];
        if((r-l)%2==0){
            if(c-'A'==(k-1)){
                fillC(l, r, 'A');
            }
            else fillC(l, r, c+1);
        }
        else{
            if(c-'A'==(k-1)){
                fillC(l, r+1, 'A');
            }
            else{
                fillC(l, r+1, c+1);
            }
        }
    }
    cout<<mx<<endl;
    cout<<s<<endl;
    return 0;
}
