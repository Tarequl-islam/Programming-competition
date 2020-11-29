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
    int t, cs = 1;
    cin >> t;
    while (t--){
        int n, a, b, c=0, i, j, mn = 1;
        ll mx=0, m;
        vpii v;
        vi outv;
        cin>>n>>m;
        for (i = 1; i <= n; i++){
            si(a);
            v.push_back(make_pair(a, i));
            if(a*2>=m && a<=m){
                c=i;
            }
        }
        if(c!=0){
            cout<<1<<endl;
            cout<<c<<endl;
            continue;
        }
        sort(v.begin(), v.end());
        for ( i = v.size()-1; i>=0; i--){
            if(v[i].first * 2 < m){
                mx+=v[i].first;
                outv.push_back(v[i].second);
            }
            if(mx*2>= m){
                mn = 0;
                break;
            }
        }
        if(mn==0){
            cout<<outv.size()<<endl;
            for ( i = 0; i < outv.size(); i++){
                printf("%d ", outv[i]);
            }
            cout<<endl;
        }
        else cout<<-1<<endl;
    }
    return 0;
}
