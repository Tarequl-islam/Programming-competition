#include <iostream>
using namespace std;

int main()
{
    int u=0,l=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++) {
        if (isupper(s[i])) u++;
        else l++;
    }
    for(int i=0;i<s.length();i++) {
        if (u > l) s[i]-=32;
        else s[i]+=32;
    }
    cout<<s<<endl;
    return 0;
}