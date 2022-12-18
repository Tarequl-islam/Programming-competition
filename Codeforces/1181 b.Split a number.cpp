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
#define PI 3.1415926535897932384626433832795028841971
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
    return left.first > right.first || (left.first == right.first && left.second < right.second); }
//int find(int x) { return (p[x] == x ? x : p[x] = find(p[x])); } //p[find(i)]=find(j);
int visited[10];
vector<int>vec[10];
void dfs(int at){
    visited[at] = 1;
    cout<<at<<" ";
    for (int i = 0; i < vec[at].size(); i++){
        if(visited[vec[at][i]]==0)
            dfs(vec[at][i]);
    }
}


int main(){ //s: 0.0 am - e: 0.00am;
    int t=1, cs = 1;
    //cin >> t;
    while (t--){
        int n, m, a, b, c, i, j, k = 0, mx = 1e8, mn = 1e8;
        cin>>n;
        string s, sa1="", sa2 = "", sb1, sb2;
        cin>>s;
        for (i = 1; i < n; i++){
            if(s[i]!='0' ){
                mn = max(i, n-i);
                if(mn <= mx){
                    mx = mn;
                    sb1 = sa1;
                    sb2 = sa2;
                    sa1 = s.substr(0, i);
                    sa2 = s.substr(i, n - i);
                }
            }
        }
        string ans1="", ans2 = "";
        for(i = sa1.length()-1, j=sa2.length()-1; i>=0 || j>=0; i--, j--){
            if(i>=0) a = sa1[i]-'0';
            else a = 0;
            if(j>=0) b = sa2[j]-'0';
            else b = 0;
            c = a+b;
            ans1 += '0'+ (c+k)%10;
            k = (c+k)/ 10;
        }
        if(k!=0) ans1+= ('0'+k);
        k=0;
        for(i = sb1.length()-1, j=sb2.length()-1; i>=0 || j>=0; i--, j--){
            if(i>=0) a = sb1[i]-'0';
            else a = 0;
            if(j>=0) b = sb2[j]-'0';
            else b = 0;
            c = a+b;
            ans2 += '0'+ (c+k)%10;
            k = (c+k)/ 10;
        }
        if(k!=0) ans2+= ('0'+k);
        bool ok = true;
        if(ans1.length() > ans2.length() && ans2.length() != 0){
            ok = false;
        }

        else if(ans1.length()==ans2.length()){
            i=ans1.length();
            while(i--){
                if(ans1[i]>ans2[i]){
                    ok = false;
                    break;
                }
                else if(ans1[i]<ans2[i]){
                    break;
                }
            }
        }
        if(ok) for(i=ans1.length()-1; i>=0; i--) cout<<ans1[i];
        else for(i=ans2.length()-1; i>=0; i--) cout<<ans2[i];
        cout<<endl;
    }
    return 0;
}
