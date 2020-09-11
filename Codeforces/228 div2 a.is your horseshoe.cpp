#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll e, i, cnt=0;
    vector<ll> arr;
    for (i = 1; i <= 4; i++){
        cin>>e;
        for (int j = 0; j < arr.size(); j++){
            if(arr[j]==e){
                 cnt++;
                 break;
            }
        }
        arr.push_back(e);
    }
    cout<<cnt<<endl;
    return 0;
}
