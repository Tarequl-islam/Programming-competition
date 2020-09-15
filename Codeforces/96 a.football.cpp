#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, m, a, b, c, cnt=0;
    string s;
    cin>>s;
    for (int i = 0; i < s.length(); i++){
        if (s[i]=='0' && s[i+1]=='0' && s[i+2]=='0' && s[i+3]=='0' && s[i+4]=='0' && s[i+5]=='0' && s[i+6]=='0'){
            cout<<"YES"<<endl;
            return 0;
        }
        if (s[i]=='1' && s[i+1]=='1' && s[i+2]=='1' && s[i+3]=='1' && s[i+4]=='1' && s[i+5]=='1' && s[i+6]=='1'){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout <<"NO"<< endl;
    return 0;
}
