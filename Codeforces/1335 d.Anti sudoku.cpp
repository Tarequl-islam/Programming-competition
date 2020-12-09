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
    int t, cs = 1;
    cin >> t;
    while (t--){
        int n, m, a, b, c, i, j, mx = 0, mn = 2222222;
        string s[10];
        for (i = 0; i < 9; i++){
            cin>>s[i];
        }
        for (i = 0; i < 9; i++){
            for (j = 0; j < 9; j++){
                if(s[i][j]=='1') s[i][j]='2';
            }
        }
        for (i = 0; i < 9; i++){
            cout<<s[i]<<endl;
        }
    }
    return 0;
}
