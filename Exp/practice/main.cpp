#include<bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input-bfs.txt", "r", stdin);
    vector<int> vec[10];
    int node, edge;
    int n1, n2;
    cin>>node>>edge;
    for(int i=0; i<edge; ++i){
        cin>>n1>>n2;
        vec[n1].push_back(n2);
        vec[n2].push_back(n1);
    }

    cout<<"\n\n\n";
    for(int i=0; i<edge; ++i){
        for(int j=0; j<vec[i].size(); ++j){
            cout<<vec[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}


