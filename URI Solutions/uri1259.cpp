#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int> even;
    vector<int> odd;
    while(t--){
        int a;
        cin>>a;
        if(a%2==0) even.push_back(a);
        else odd.push_back(a);
    }
    sort(even.begin(), even.end());
    for(int i=0; i<even.size(); i++) cout<<even[i]<<endl;
    sort(odd.begin(), odd.end(), greater<int>());
    for(int i=0; i<odd.size(); i++) cout<<odd[i]<<endl;
    return 0;
}


