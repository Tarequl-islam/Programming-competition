#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt", "r", stdin);
    string s;
    cin >> s;
    if(s[0]>='a' && s[0]<='z') s[0]-=32;
    cout << s << "\n";
    return 0;
}
