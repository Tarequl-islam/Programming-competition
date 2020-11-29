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

    int n, m, a, b, c,d, i, j, mx = 0, mn = 2222222;
    vpii v;
    si(n);
    for ( i = 0; i < n; i++){
        cin>>b>>d;
        v.push_back(make_pair(b, 1));
        v.push_back(make_pair(d, -1));
    }
    sort(v.begin(), v.end());
    pii ans(0, -1);
    for ( i = 0; i < v.size(); i++){
        if(v[i].second == -1) mx--;
        else{
            mx++;
            ans = max(ans, make_pair(mx, -v[i].first));
        }
    }
    cout<<-ans.second<<" "<<ans.first<<endl;
    return 0;
}
