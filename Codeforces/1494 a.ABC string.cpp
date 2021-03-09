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

int main(){ //s: 06.24am - e: 07.00am;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t, cs = 1;
    cin >> t;
    while (t--){
        ll n, m, a=0, b=0, c=0,d, i, j, k, mx = 0, mn = 1e18;
        string s, ss = "                                                                                                              ";
        char aa, bb, cc;
        cin>>s;
        ss[0]='(';
        aa=s[0];
        for (i = 0; i < s.length(); i++){
            if(s[i]==aa){ 
                ss[i]='(';
                a++;
            }
        }
        if(s[s.length()-1]==aa){
            cout<<"NO"<<endl;
        }
        else{
            bb=s[s.length()-1];
            for (i = 0; i < s.length(); i++){
                if(s[i]==bb){ 
                    ss[i]=')';
                    b++;
                }
            }
            if(a>b) for(i=0; i<s.length(); i++) {
                if(s[i]!=bb &&s[i]!=aa){ 
                    ss[i]=')';
                    c++;
                }
            }
            else for(i=0; i<s.length(); i++) {
                if(s[i]!=bb &&s[i]!=aa){ 
                    ss[i]='(';
                    c++;
                }
            }
            stack<char> stk;
            for(i=0; i<s.length(); i++){
                if(ss[i]=='(') stk.push('(');
                else if(stk.size()==0) mx=1;
                else stk.pop();
            }
            if(mx==1 || stk.size()>0) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
    return 0;
}
