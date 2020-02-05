#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v{3,4,4,4,5,6,7};
//    v.push_back(44);
//    v.push_back(8);
//    v.push_back(9);
    sort(v.begin(), v.end());
    bool b= binary_search(v.begin(), v.end(), 44);
    if(b)cout<<"found\n";
    else cout<<"not found\n";
    auto it = upper_bound(v.begin(), v.end(), 4);
    cout<<it-v.begin();

    return 0;
}
