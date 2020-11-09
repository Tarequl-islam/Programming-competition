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
bool cmp(const ll &a, const ll &b){
    return abs(a) > abs(b);
}
int main(){
    // freopen("input.txt", "r", stdin); start- -end 11.47 am
    // freopen("output.txt", "w", stdout);
    int t, cs = 1;
    cin >> t;
    while (t--){
        int n, a=0, b=0,c=0, i, j=0,k=0, mx = 0, mn = 1e9;
        string s;
        int ar[200]={0};
        cin>>s;
        a = s.length();
        for ( i = 0; i < a; i++){
            ar[s[i]]++;
            if(ar['1']>=1 && ar['2']>=1 && ar['3']>=1){
                k=1;
                break;
            }
        }
        i++; 
        if(k==0) cout<<0<<endl;
        else{
            for(; i< a; i++){
                while(ar[s[j]]>1){ 
                    ar[s[j]]--;
                    j++;
                }
                mn = min(mn, i - j);
                ar[s[i]]++;
            }
            while(ar[s[j]]>1){ 
                ar[s[j]]--;
                j++;
            }
            mn = min(mn, a-j);
            cout<<mn<<endl;
        }
    }
    return 0;
}
