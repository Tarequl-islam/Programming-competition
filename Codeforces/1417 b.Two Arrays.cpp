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
        int n, m, a, b, c=-1, i, j, k, mx = 0, mn = 1e9;
        int ar[100005];
        si(n);
        si(m);
        for ( i = 0; i <n; i++){
            si(ar[i]);
        }
        for ( i = 0; i <n; i++){
            a = ar[i];
            if(a== m/2.0){
                if(c==0){
                    printf("0 ");
                    c=1;
                }
                else{
                    printf("1 ");
                    c=0;
                }
            }
            else if(a>m/2.0)
                printf("0 ");
            else if(a<m/2.0)
                printf("1 ");
        }
        printf("\n");
    }
    return 0;
}
