#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    for (ll j = 1; j <= t; j++)
    {
        int n;
        cin>>n;
        string a, b;
        cin>>a;
        cin>>b;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if(a==b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
