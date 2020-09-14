#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, m, a, b, c, cnt=0;
    string s;
    cin>>s;
    for (int i = 0; i < s.length(); i++){
        if (s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            i+=2;
        }
        else{
            while (i<s.length() && !(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')){
                cout<<s[i];
                i++;
            }
            cout<<" ";
            i--;
        }
    }
    cout<<endl;
    return 0;
}
