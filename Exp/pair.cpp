#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int, string> p;
    p.first=1;
    p.second="ands";
    cout<<p.first<<" "<<p.second<<endl;
    pair<int, int> pp(1,5);
    cout<<pp.first<<" "<<pp.second<<endl;

    vector< pair<string, int> > vec;
    vec.push_back(make_pair("apple", 5));
    vec.push_back(make_pair("orange", 12));
    vec.push_back(make_pair("banana", 8));
    for( int i=0; i<vec.size(); i++){
        cout<<vec[i].first<<" "<<vec[i].second<<endl;
    }


    return 0;
}
