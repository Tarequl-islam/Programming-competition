#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll GCD(ll a, ll b) { return (a % b) == 0 ? b : GCD(b, a % b); }
int main()
{
    int n, a, b, c,x,y,z, cnt = 0;
    cin >> a>>b>>c;
    x = sqrt(a*c/b);
    y = sqrt(a*b/c);
    z = sqrt(b*c/a);
    cout << 4*(x+y+z) << endl;
    return 0;
}
