#include <iostream>
using namespace std;
int main() {
    string s;
    int u = 0, l = 0;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if (isupper(s[i])) u++;
        else l++;
    }
    if (u > l) {
        for (int i = 0; i < s.length(); i++) {
            toupper(s[i]);
            cout<<s[i];
        }
    }
    else {
        for (int i = 0; i < s.length(); i++) {
            tolower(s[i]);
            cout<<s[i];
        }
    }
    cout<<endl;
    return 0;
}
