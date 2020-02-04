#include <iostream>
#include <vector>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    for (ll j = 1; j <= t; j++)
    {
        ll n, nn;
        string s;
        cin>>n;
        cin>>s;
        nn=s.size();
        for(ll i=0; i<nn; i++){
            if(s[i]=='E'){
                s[i]='S';
            }
            else s[i]='E';
        }
        cout<<"Case #"<<j<<": "<<s<<endl;
    }
    return 0;
}
