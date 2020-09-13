#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, a, b, c, cnt=0;
    string s;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>s;
        if (s == "X++" || s == "++X")
            cnt++;
        if (s == "X--" || s == "--X")
            cnt--;
    }
    cout<<cnt<<endl;
    return 0;
}
