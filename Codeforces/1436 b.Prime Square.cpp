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

vector<int> Np;
vector<int> primes;
bitset<1000002> bs;
void sieve(int n){
    bs.set();
    bs[0] = bs[1] = 0;
    Np.push_back(1);
    for (ll i = 2; i < n; i++){
        if (bs[i]){
            for (ll j = i * i; j < n; j += i)
                bs[j] = 0;
            primes.push_back(i);
        }
        else Np.push_back(i);
    }
}
int main(){
    int t, cs = 1;
    sieve(100005);
    cin >> t;
    while (t--){
        int n, m, k, a, b, c, d, i, j, mx = 0, mn = 0;
        int ar[102][102];
        cin>>n;
        for ( i = 0; i < n; i++){
            ar[i][i]=Np[i];
            for ( j = i+1; j < n-1; j++){
                ar[i][j]=Np[j];
                ar[j][i] = Np[j];
            }
            mx=0;
            for (int k = 0; k < n-1; k++){
                mx+=ar[i][k];
            }
            int l = 0;
            while (bs[mx+Np[l]] != 1){
                l++;
            }
            ar[i][n-1] = Np[l];
            ar[n-1][i]=Np[l];
        }
        for ( i = 0; i < n; i++){
            for ( j = 0; j < n; j++){
                cout<<ar[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
