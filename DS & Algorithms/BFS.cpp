#include<bits/stdc++.h>
using namespace std;
int visited[100000];
int level[100000];
vector<int>vec[100000];
int bfs(int s){
    visited[s]=1;
    level[s]=0;
    queue<int>q;
    q.push(s);
    while(!q.empty ()){
        int x=q.front();
        q.pop();
        for(int i=0; i<vec[x].size(); i++){
            int y=vec[x][i];
            if(visited[y]==0){
                visited[y]=1;
                if(level[x]==0)
                    level[y]=1;
                else if(level[x]==1)
                    level[y]=0;
                q.push(y);
            }
            else if(visited[y]==1){
                if(level[y] == level[x])
                    return 0;
            }
        }
    }
    return 1;
}
int main(){
    int i,j,ver,edg,u,v,z=0;
    while(cin>>ver){
        if(ver==0)
            break;
        cin>>edg;
        memset(visited,0,sizeof(visited));
        for (i = 0; i < ver; i++){
            vec[i].clear();
        }
        for(i=0; i<edg; i++){
            cin>>u>>v;
            vec[u].push_back(v);
            vec[v].push_back(u);
        }
        z = bfs(u);
        if(z==1)
            cout<<"BICOLORABLE."<<endl;
        else if(z==0)
            cout<<"NOT BICOLORABLE."<<endl;
    }
}
