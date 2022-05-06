#include <iostream>
#include <vector>
#define ll long long int
using namespace std;
int main()
{
    ll t, j;
    cin >> t;
    for (j = 1; j <= t; j++)
    {
        string s, vec;
        cin>>s;
        ll n= s.size();
        for(ll i=0; i<n; i++) vec[i]='0';
        for(ll i=0; i<n; i++){
            if(s[i]=='4') s[i]='3', vec[i]='1';
        }
        cout<<"Case #"<<j<<": "<<s<<" ";
        ll k=0;
        for(k=0; k<n; k++){
            if(vec[k] != '0') break;
        }
        while(k<n){
            cout<<vec[k];
            k++;
        }
        cout<<endl;
    }
    return 0;
}
