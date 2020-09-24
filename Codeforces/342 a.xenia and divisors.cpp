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
struct abc{
    int a,b,c;
    abc(int aa, int bb, int cc){
        a=aa; b=bb; c=cc;
    }
};
int p[10];
int main(){
    ll n, m, i, j, mx=0, mn=2222222;
    int ar[100005];
    vector<abc> vec;
    cin>>n;
    for (i = 0; i < n; i++){
        si(ar[i]);
        p[ar[i]]++;
    }
    if (n%3!=0 || p[0]!=0 || p[5]!=0 || p[7]!=0){
        cout<<-1<<endl;
        return 0;
    }
    for (i = 0; i < n/3; i++){
        if (p[1]!=0 && p[3]!=0 && p[6]!=0){
            vec.push_back(abc(1,3,6));
            p[1]--; p[3]--; p[6]--;
        }
        else if (p[1]!=0 && p[2]!=0 && p[4]!=0){
            vec.push_back(abc(1, 2, 4));
            p[1]--; p[2]--; p[4]--;
        }
        else if (p[1]!=0 && p[2]!=0 && p[6]!=0){
            vec.push_back(abc(1, 2, 6));
            p[1]--; p[2]--; p[6]--;
        }
    }
    if (vec.size()==n/3){
        for (int i = 0; i < vec.size(); i++){
            cout<<vec[i].a<<" "<<vec[i].b<<" "<<vec[i].c<<endl;
        }
    }
    else cout<<-1<<endl;
    return 0;
}
