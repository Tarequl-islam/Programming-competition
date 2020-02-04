#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> s;
    set<int> :: iterator it;
    s.insert(4);
    s.insert(8);
    s.insert(7);
    for(it=s.begin(); it!=s.end(); it++){
        cout<<*it<<" ";
    }
    return 0;
}
