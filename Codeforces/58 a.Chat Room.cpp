#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n,i, j=0;
    string s, ss="hello";
    cin>>s;
    for ( i = 0; i < s.length(); i++){
        if(s[i]==ss[j]) j++;
    }
    if(j>=5)
        cout <<"YES"<< endl;
    else cout<<"NO"<<endl;
    return 0;
}
