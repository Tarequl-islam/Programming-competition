#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n=0;
    string s;
    cin>>s;
    for (int i = 0; i < s.length(); i++){
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){
            n=1;
        }
    }
    if (n==1)
        cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
