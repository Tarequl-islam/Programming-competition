#include<bits/stdc++.h>
using namespace std;
int main(){
    set<string> s;
    string st;
    while (cin >> st){
        s.insert(st);
    }
    cout << s.size() << endl;
    return 0;
}