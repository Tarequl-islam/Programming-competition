#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int> q;
    q.push(44);
    q.push(22);
    q.push(66);
    q.push(11);
    while(!q.empty()){
        cout<<q.top()<<"\n";
        q.pop();
    }
    priority_queue<string> s;
    s.push("ruhul");
    s.push("kuddus");
    s.push("naim");
    s.push("jumman");
    s.push("ahmed");
    while(!s.empty()){
        cout<<s.top()<<"\n";
        s.pop();
    }
    return 0;
}
