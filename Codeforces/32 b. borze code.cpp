#include <bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt", "r", stdin);
    vector<int> n;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++){
        if (s[i] == '.') n.push_back(0);
        else if (s[i] == '-' && s[i+1] == '.'){
            n.push_back(1);
            i++;
        }
        else if (s[i] == '-' && s[i + 1] == '-'){
            n.push_back(2);
            i++;
        }
    }
    for (int i = 0; i < n.size(); i++){
        cout<<n[i];
    }
    cout<<"\n";
    return 0;
}
