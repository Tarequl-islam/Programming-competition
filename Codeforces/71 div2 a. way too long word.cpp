#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, i, cnt=0;
    string s;
    cin>>n;
    for (i = 1; i <= n; i++){
        cin>>s;
        if (s.length()>10){
            cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
        }
        else cout<<s<<endl;
    }
    return 0;
}
