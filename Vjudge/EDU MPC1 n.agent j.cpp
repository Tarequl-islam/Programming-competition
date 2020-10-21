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
#define PI acos(-1)
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
int main(){
    int t, cs=1;
    cin>>t;
    while (t--){
        double R1, R2, R3, Rc1, Rc2, Rc3, s, area, a, b, c, sm;
        cin>>R1>>R2>>R3;
        a = R1+R2;
        b = R1+R3;
        c = R2+R3;
        Rc1 = acos((a*a + b*b - c*c)/(2*a*b));
        Rc2 = acos((a*a + c*c - b*b)/(2*a*c));
        Rc3 = acos((b*b + c*c - a*a)/(2*b*c));
        s = (a+b+c)/2;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        sm = (Rc1/2)*R1*R1+(Rc2/2)*R2*R2+(Rc3/2)*R3*R3;
        printf("Case %d: %.7f\n", cs++, area-sm);
    }
    return 0;
}
