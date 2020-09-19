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
    ll n, sx, sy, ex, ey, dx, dy, a=0, b=0, c, i, j, mx=0, mn=2222222;
    string s;
    cin>>n>>sx>>sy>>ex>>ey;
    cin>>s;
    dx = ex-sx;
    dy = ey-sy;
    if (dx>=0 && dy>=0){
        for (int i = 0; i < n; i++){
            if(s[i]=='E') a++;
            if(s[i]=='N') b++;
            if(a>=dx && b>=dy){
                cout<<i+1<<endl;
                return 0;
            }
        }
    }
    else if (dx<=0 && dy<=0){
        for (int i = 0; i < n; i++){
            if(s[i]=='W') a--;
            if(s[i]=='S') b--;
            if(a<=dx && b<=dy){
                cout<<i+1<<endl;
                return 0;
            }
        }
    }
    else if (dx>=0 && dy<=0){
        for (int i = 0; i < n; i++){
            if(s[i]=='E') a++;
            if(s[i]=='S') b--;
            if(a>=dx && b<=dy){
                cout<<i+1<<endl;
                return 0;
            }
        }
    }
    else if (dx<=0 && dy>=0){
        for (int i = 0; i < n; i++){
            if(s[i]=='W') a--;
            if(s[i]=='N') b++;
            if(a<=dx && b>=dy){
                cout<<i+1<<endl;
                return 0;
            }
        }
    }
    cout <<-1<< endl;
    return 0;
}
