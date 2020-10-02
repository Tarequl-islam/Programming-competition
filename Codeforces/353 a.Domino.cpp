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
    int n, m, a=0, b=0, c, i, j, mx=0, mn=2222222;
    int ar[105], br[105];
    si(n);
    for (i = 0; i < n; i++){
        //scanf("%d %d", &ar[i], &br[i]);
        cin >> ar[i]>> br[i];
    }
    for (i = 0; i < n; i++){
        a+=ar[i];
        b+=br[i];
        if(ar[i]%2==0 && br[i]%2 !=0) mx=1;
        else if(ar[i]%2!=0 && br[i]%2 ==0) mx=1;
    }
    if (a%2==0 && b%2==0){
        cout<<0<<endl;
    }
    else if ((a%2==0 && b%2 !=0) || (a%2!=0 && b%2 ==0)){
        cout<<-1<<endl;
    }
    else if (a%2!=0 && b%2 !=0 && mx==1)
        cout<<1<<endl;
    else 
        cout<<-1<<endl;
    return 0;
}
