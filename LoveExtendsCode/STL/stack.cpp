#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<string> ss;
    ss.push("ruhul");
    ss.push("kuddus");
    ss.push("naim");
    ss.push("jumman");
    while(!ss.empty()){
        cout<<ss.top()<<" ";
        ss.pop();
    }
    return 0;
}
