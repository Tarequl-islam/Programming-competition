#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, s, a, b, c, cnt=0;
    vector<pair<int, int>> mm;
    cin>>s>>n;
    for (int i = 0; i < n; i++){
        cin>>a>>b;
        mm.push_back(make_pair(a,b));
    }
    sort(mm.begin(), mm.end());
    for (int i= 0; i<n; i++){
        if(mm[i].first < s){
            s+= mm[i].second;
        }
        else {
            cout<<"NO\n";
            return 0;
        }
    }
    cout <<"YES"<< endl;
    return 0;
}
