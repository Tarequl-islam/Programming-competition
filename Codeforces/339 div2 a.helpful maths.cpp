#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, x=0, y=0, z=0, i;
    string s;
    vector<char>ch;
    cin >>s;
    for (i = 0; i < s.length(); i++){
        if (s[i] == '1') 
            x++;
        if (s[i] == '2')
            y++;
        if (s[i] == '3') 
            z++;
    }
    for ( i = 0; i < x; i++){
        ch.push_back('1');
        ch.push_back('+');
    }
    for ( i = 0; i < y; i++){
        ch.push_back('2');
        ch.push_back('+');
    }
    for ( i = 0; i < z; i++){
        ch.push_back('3');
        ch.push_back('+');
    }
    for ( i = 0; i+1 < ch.size(); i++){
        cout<<ch[i];
    }
    cout<<endl;
    return 0;
}
