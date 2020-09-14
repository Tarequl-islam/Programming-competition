#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, a, b, c, cnt=0;
    string s;
    cin>>s;
    for (int i = 0; i < s.length(); i++){
        if (s[i] != '1'){
            cout<<"NO"<<endl;
            return 0;
        }
        if (s[i] == '1' && s[i + 1] == '4' && s[i+2] == '4'){
            i+=2;
        }
        else if (s[i] == '1' && s[i + 1] == '4'){
            i++;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
