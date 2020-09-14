#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, m, a, b, c, cnt=0;
    int ar[55], br[55];
    vector<int> v;
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>ar[i];
    }
    cin>>m;
    for (int i = 0; i < m; i++){
        cin>>br[i];
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (br[j]% ar[i]==0){
                v.push_back(br[j]/ar[i]);
            }
        }
    }
    sort(v.begin(), v.end());
    for (int i =v.size()-1; i>=0; i--){
        if (v[v.size()-1] == v[i]){
            cnt++;
        }
        else break;
    }
    cout << cnt << endl;
    return 0;
}
