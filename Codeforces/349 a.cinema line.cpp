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
    int n, m, a25=0, a50=0, a100=0, i, j, mx=0, mn=2222222;
    int ar[100005];
    si(n);
    for (i = 0; i < n; i++){
        si(ar[i]);
    }
    for (i = 0; i < n; i++){
        if(ar[i]==50){
            a50++;
            if(a25>=1)
                a25--;
            else{
                cout<<"NO\n";
                return 0;
            }
        }
        else if(ar[i]==100){
            if (a50 >= 1 && a25 >= 1){
                a50--;
                a25--;
            }
            else if (a25 >= 3)
                a25-=3;
            else{
                cout<<"NO\n";
                return 0;
            }
        }
        else if(ar[i]==25) a25++;
    }
    cout <<"YES"<< endl;
    return 0;
}
