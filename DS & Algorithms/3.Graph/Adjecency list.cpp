#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
vector<int> edges[MAX];
vector<int> cost[MAX];
int main(){
    freopen("input-bfs.txt", "r", stdin);
    int node, edge;
    int n1, n2;
    cin>>node>>edge;
    for(int i=0; i<edge; ++i){
        cin>>n1>>n2;
        edges[n1].push_back(n2);
        edges[n2].push_back(n1);
        cost[n1].push_back(1);
        cost[n2].push_back(1);
    }

    cout<<"\n\n\n";
    for(int i=0; i<edge; ++i){
        for(int j=0; j<edges[i].size(); ++j){
            cout<<edges[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}


