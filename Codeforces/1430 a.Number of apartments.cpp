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
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t, cs = 1;
    cin >> t;
    while (t--){
        int n, a, b, c=0, d, mx=0;
        cin>>n;
        a = n/7;
        if(a*7 == n) printf("0 0 %d\n", a);
        else{
            for (int i = a; i >= 0; i--){
                b = n-(i*7);
                for (int j = b/5; j >= 0; j--){
                    if ((n-(i*7 + j*5))%3==0){
                        printf("%d %d %d\n", (n-(i*7 + j*5))/3, j, i);
                        c = 1;
                        break;
                    }
                }
                if(c==1) break;
            }
            if(c==0) cout<<-1<<endl;
        }

    }
    return 0;
}
