#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, m, a, b, c, cnt=0;
    string s, ss="";
    cin>>s;
    for (int i = 0; i <s.length(); i++){
        if (s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'|| s[i]=='Y' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'|| s[i]=='y'){
            continue;
        }
        else if (s[i] >= 'a' && s[i] <= 'z'){
            ss += ".";
            ss +=s[i];
        }
        else if (s[i] >= 'A' && s[i] <= 'Z'){
            ss += ".";
            ss += s[i]+32;
        }
    }
    cout <<ss<< endl;
    return 0;
}
