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

int main(){
    int t=1, cs = 1;
    cin >> t;
    while (t--){
        int n, m, a, b, c, i, j, k, mx=0, mn=0, tmp=0;
        string s=" ", ss;
        cin>>ss;
        s+=ss;
        cin>>n;
        printf("Case %d:\n", cs++);
        for (k = 0; k < n; k++){
            si(a);
            if(a==1){
                scanf("%d%d", &b, &c);
                j=c; mn=0; mx=0; tmp=0;
                for(i=b; i<j; i++){
                    if(s[i]!=s[j]){
                        if(mn==1){
                            pi(-1);
                            tmp=1;
                            break;
                        }
                        mn=1;
                        if(s[i+1]==s[j]){
                            mx=i;
                            i++;
                        }
                        else if(s[i]==s[j-1]){
                            mx=j;
                            j--;
                        }
                        else{
                            pi(-1);
                            tmp=1;
                            break;
                        }
                    }
                    j--;
                }
                if(tmp==0) pi(mx);
            }
            else{
                char cc;
                si(b);
                cin>>cc;
                s[b]=cc;
            }
        }
    }
    return 0;
}
