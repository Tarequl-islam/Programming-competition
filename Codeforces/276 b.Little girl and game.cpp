#include<bits/stdc++.h>
#define ll long long
using namespace std;
char c[300];
int main(){
    int n, a=0, b, d;
    string s;
    cin>>s;
    for (int i = 0; i < s.length(); i++){
        c[s[i]]++;
    }
    for (int i = 'a'; i <= 'z'; i++){
        if(c[i]%2 != 0) a++;
    }
    if(a%2!=0 || a==0)cout<<"First\n";
    else
        cout << "Second\n";
    return 0;
}
