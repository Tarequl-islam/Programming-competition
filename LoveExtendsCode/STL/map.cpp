#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string, int> m;
    map<string, int> :: iterator it;
    m["ruhul"]=33;
    m["kuddus"]=44;
    m["naiym"]=55;
//    m.insert(make_pair("jumman",45));
//    for(it=m.begin(); it!=m.end(); it++){
//        cout<<it->first<<" "<<it->second<<endl;
//    }
    map<string, string> attend;
    attend.insert(make_pair("md" , "ddsffg"));
    attend.insert(make_pair("jumman","ds"));
    attend.insert(make_pair("ahmed","ssf"));
    //it = attend.begin();
    cout<<attend["ds"];
    return 0;
}
