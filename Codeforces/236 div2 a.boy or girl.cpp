#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, i, cnt=0;
    set<char> ss;
    string s;
    cin>>s;
    for ( i = 0; i < s.length(); i++){
        ss.insert(s[i]);
    }
    if (ss.size()%2==0){
        cout<<"CHAT WITH HER!\n";
    }
    else cout<<"IGNORE HIM!\n";
    return 0;
}
