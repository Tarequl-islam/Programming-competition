#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt", "r", stdin);
    int n, t, a, b, i, j;
    string s;
    cin >> n;
    while (true){
        n++;
        s=to_string(n);
        if(s[0]==s[1] || s[0]==s[2] || s[0]==s[3] || s[1]==s[2] || s[1]==s[3] || s[2]==s[3])
            continue;
        else{
            cout<<s<<endl;
            break;
        }
    }
    return 0;
}
