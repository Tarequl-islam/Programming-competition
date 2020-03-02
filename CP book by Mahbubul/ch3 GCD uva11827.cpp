#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll GCD(ll a, ll b){ return (a%b)==0 ? b : GCD(b, a%b);}
int main(){
    ll t;
    string s;
    cin>>t;
    getline(cin, s);
    while(t--){
        ll gc[100],l=0, Mgcd=0;
        getline(cin, s);
        istringstream st(s);
        while(st>>gc[l]) l++;
        for(int i = 0;i<l;i++){
			for(int j = i+1;j<l;j++){
				Mgcd = max(Mgcd,GCD(gc[i], gc[j]));
			}
        }
        cout<<Mgcd<<endl;
    }
    return 0;
}
