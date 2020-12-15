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
    // s 02.25am - e 03.04am
    int t, cs = 1;
    cin >> t;
    while (t--){
        int n, m, a, b, c, i, j, k, mx = 0, mn = 1e18;
        string s;
        cin>>n>>k;
        cin>>s;
        s+='0';
        for (i = 0; i < n; i++){
            a = 0;
            if(s[i]=='0' && i==0){
                while(s[i]=='0' && i<n){
                    i++;
                    a++;
                }
                if(i==n) mx= 1+ (a-1)/(k+1);
                else mx = a/(k+1);
            }
            else if(s[i]=='0'){
                while(s[i]=='0' && i<n){
                    i++;
                    a++;
                }
                if(i==n) mx+= a/(k+1);
                else mx += (a-k)/(k+1);
            }
            if(a!=0) i--;
        }
        cout<<mx<<endl;
    }
    return 0;
}
