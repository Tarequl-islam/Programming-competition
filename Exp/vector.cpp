#include<bits/stdc++.h>
using namespace std;
bool funcc(int a, int b){
    return a>b;
}
int main(){
    vector<int> vec;
    vector<int> :: iterator it;
    int n, t;
    cin>>n;
    while(n--){
        cin>>t;
        vec.push_back(t);
    }
    for(int i=0; i<vec.size(); i++)
        cout<<vec[i]<<"\t";
    cout<<"\n";

    sort(vec.begin(), vec.end(), funcc);

    for(it=vec.begin(); it!=vec.end(); it++)
        cout<<*it<<"\t";

    return 0;
}
