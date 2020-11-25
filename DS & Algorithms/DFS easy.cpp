#include<bits/stdc++.h>
using namespace std;
int visited[100000];
vector<int>vec[100000];
void dfs(int at){
    if(visited[at]==1) return;
    visited[at] = 1;
    cout<<at<<" ";
    for (int i = 0; i < vec[at].size(); i++){
        dfs(vec[at][i]);
    }
}
int main(){
    int i,j,ver,edg,u,v,z=0;
    cin>>ver>>edg;
    for(i=0; i<edg; i++){
        cin>>u>>v;
        vec[u].push_back(v);
        vec[v].push_back(u);
    }
    cout << "Following Depth First Traversal starting from "<<u<<" is : "; 
    dfs(u);
    return 0;
}