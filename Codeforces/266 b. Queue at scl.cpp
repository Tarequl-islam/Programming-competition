#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt", "r", stdin);
    int n, t, a, b, i, j;
    string s;
    cin>>n>>t;
    cin>>s;
    while(t--){
        for(i=0; i<s.length(); i++){
            if(s[i]=='B' && s[i+1]=='G'){
                s[i]='G';
                s[i+1]='B';
                i++;
            }
        }
    }
    cout <<s<< "\n";
    return 0;
}
