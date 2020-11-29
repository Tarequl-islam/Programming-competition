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
    // freopen("input.txt", "r", stdin); start- 08.03pm. end-
    // freopen("output.txt", "w", stdout);
    int t, cs = 1;
    cin >> t;
    while (t--){
        int n, m, a, b, c, d, i, j, mx = 0, mn = 2222222;
        cin>>a>>b>>c>>d;
        if(a==0 && d==0){
            if(b%2==1) cout<<"Tidak Ya Tidak Tidak\n";
            else cout<<"Tidak Tidak Ya Tidak\n";
        }
        else if(b==0 && c==0){
            if(a%2==1) cout<<"Ya Tidak Tidak Tidak\n";
            else cout<<"Tidak Tidak Tidak Ya\n";
        }
        else{
            if((a+b)%2==1) cout<<"Ya Ya Tidak Tidak\n";
            else cout<<"Tidak Tidak Ya Ya\n";
        }
    }
    return 0;
}
