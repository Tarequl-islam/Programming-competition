#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string l;
    cin>>t;
    while(t--){
        cin>>l;
        stack<char> s;
        int diamond = 0;
        for (int i = 0; i < l.length(); ++i){
            if(l[i] == '<') s.push(i);
            if(l[i] == '>' && !s.empty()){
                s.pop();
                diamond++;
            }
        }
        cout <<diamond<< endl;
    }
    return 0;
}
