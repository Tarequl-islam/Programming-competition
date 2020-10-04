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
bool cmp(const pii &left, const pii &right){
    return left.first > right.first || (left.first == right.first && left.second < right.second);
}
int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n, m, a=0, b=0, c, i, j, mx=0, mn=2222222;
    char ar[10][10];
    for (i = 0; i < 4; i++){
        for ( j = 0; j < 4; j++){
            cin>>ar[i][j];
        }
    }
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            a=0; b=0;
            if(ar[i][j]=='.') a++;
            else b++;
            if(ar[i+1][j]=='.') a++;
            else b++;
            if(ar[i][j+1]=='.') a++;
            else b++;
            if(ar[i+1][j+1]=='.') a++;
            else b++;
            if(a>=3 || b>=3) mx++;
        }
    }
    if(mx>=1)
        cout <<"YES"<< endl;
    else cout<<"NO"<<endl;
    return 0;
}
