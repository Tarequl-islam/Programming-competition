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
    int t, cs=1;
    cin>>t;
    while (t--){
        int m, n, a, b, c=0, x, y;
        int ar[105];
        string s;
        cin>>n>>m;
        for (int i = 0; i < n; i++){
            cin>>ar[i];
        }
        for (int i = 0; i < m; i++){
            cin>>s;
            if(s=="S"){
                cin>>a;
                for (int k = 0; k < n; k++){
                    ar[k]+=a;
                }
            }
            else if (s=="M"){
                cin>>a;
                for (int k = 0; k < n; k++){
                    ar[k]*=a;
                }
            }
            else if (s=="D"){
                cin>>a;
                for (int k = 0; k < n; k++){
                    ar[k]/=a;
                }
            }
            else if (s=="R"){
                x=0; y=n-1;
                while (x<=y){
                    swap(ar[x], ar[y]);
                    x++; y--;
                }
            }
            else if (s=="P"){
                cin>>a>>b;
                swap(ar[a], ar[b]);
            }
        }
        cout<<"Case "<<cs++<< ":\n";
        for (int i = 0; i < n-1; i++){
            cout<<ar[i]<<" ";
        }
        cout<<ar[n-1]<<endl;
    }
    return 0;
}
