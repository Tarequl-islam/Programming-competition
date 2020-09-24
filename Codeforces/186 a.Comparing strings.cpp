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
int main(){
    ll c, i, j, mx=0, mn=2222222;
    char n=' ', m, a=' ', b;
    string s, s2;
    cin>>s>>s2;
    for (i = 0; i < s.length(); i++){
        if (s[i]!=s2[i] && a==' '){
            a=s[i];
            b=s2[i];
        }
        else if (s[i] != s2[i] && n==' '){
            n=s[i];
            m=s2[i];
        }
        else if (s[i] != s2[i] && n !=' ' && a != ' '){
            cout<<"NO\n";
            return 0;
        }
    }
    if(a == m && b == n && s.length()==s2.length()) 
        cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
