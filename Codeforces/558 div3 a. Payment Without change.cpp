#include <iostream>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    for (ll j = 1; j <= t; j++)
    {
        ll a, b, n, s, requiredN, required1;
        cin>>a>>b>>n>>s;
        requiredN = s/n;
        required1 = s%n;
        if(requiredN <= a && required1 <= b){
            cout<<"YES"<<endl;
        }
        else if(b >= s){
            cout<<"YES"<<endl;
        }
        else if(a*n>= s && requiredN*n+b >= s){
            cout<<"YES"<<endl;  //important
        }
        else if(a*n< s && (n*a)+b >= s){
            cout<<"YES"<<endl;  //important
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}
