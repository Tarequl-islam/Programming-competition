#include<bits/stdc++.h>
using namespace std;
int main(){
    multimap<string, int> m;
    multimap<string, int>:: iterator it;
    m.insert(make_pair("md", 23));
    m.insert(make_pair("jumman", 33));
    m.insert(make_pair("ahmed", 15));
    for(it=m.begin(); it!=m.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    multiset<int> s;
    multiset<int>:: iterator itt;
    s.insert(4);
    s.insert(6);
    s.insert(11);
    s.insert(4);
    for(itt=s.begin(); itt!=s.end(); itt++){
        cout<<*itt<<endl;
    }
    return 0;
}
