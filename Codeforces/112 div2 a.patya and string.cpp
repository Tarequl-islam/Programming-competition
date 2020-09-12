#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n=0;
    string s, ss;
    cin>>s>>ss;
    for (int i = 0; i < s.length(); i++){
        if (s[i]<=90 && s[i]>=65){
            s[i]+=32;
        }
        if (ss[i]<=90 && ss[i]>=65){
            ss[i]+=32;
        }
    }
    for (int i = 0; i < s.length(); i++){
        if (s[i]>ss[i]){
            cout<<1<<endl;
            n=1; 
            break;
        }
        else if (s[i]<ss[i]){
            cout<<-1<<endl;
            n=1;
            break;
        }
    }
    if (n == 0)
        cout << "0\n";
    return 0;
}
