#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n, l[100000], r[100000], ln=0, rn=0, i, ans;
    cin >>n;
    for (i = 1; i <= n; i++){
        cin>>l[i]>>r[i];
        if (l[i]) ln++;
        if (r[i]) rn++;
    }
    if(ln>n/2.0)
        ln = n-ln;
    if(rn>n/2.0)
        rn = n-rn;
    
    cout<<ln + rn<<endl;
    return 0;
}
