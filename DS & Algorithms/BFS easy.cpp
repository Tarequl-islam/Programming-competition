#include<bits/stdc++.h>
using namespace std;
int visited[100000];
int level[100000];
vector<int>vec[100000];
void bfs(int s){
    visited[s]=1;
    level[s]=0;
    queue<int>q;
    q.push(s);
    while(!q.empty ()){
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        for(int i=0; i<vec[x].size(); i++){
            int y=vec[x][i];
            if(visited[y]==0){
                visited[y]=1;
                level[y]=level[x]+1;
                q.push(y);
            }
        }
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
    cout << "Following Breadth First Traversal starting from "<<0<<" is : "; 
    bfs(0);
    return 0;
}
