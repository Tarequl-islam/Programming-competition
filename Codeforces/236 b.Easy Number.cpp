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
int NOD(int n){
    int i, ans = 0;
    for (i = 1; i * i <= n; i++){
        if (n % i == 0){
            if (i * i == n)
                ++ans;
            else
                ans += 2;
        }
    }
    return ans;
}

int main(){
    ll n, m, a, b, c, d, i, j, k, answer=0, mn=2222222;
    cin >> a >> b >> c;
    vi v(a * b * c + 5);
    for (i = 1; i <= a; i++){
        for (j = 1; j <= b; j++){
            for (k = 1; k <= c; k++){
                d = i * j * k;
                if (v[d] == 0)
                    v[d] = NOD(d);
                answer += v[d];
            }
        }
    }
    answer %= 1073741824;
    cout <<answer<< endl;
    return 0;
}
