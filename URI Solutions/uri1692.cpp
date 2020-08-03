#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1002];
int visited[1002];
int level[1002];
int bfs(int s, int kn){
    int x, infected=1;
    queue<int> q;
    visited[s]=1;
    level[s]=1;
    q.push(s);
    while(!q.empty()){
        x = q.front();
        if(level[x] > kn) break;
        q.pop();
        for (int i = 0; i < adj[x].size(); i++){
            int y= adj[x][i];
            if(visited[y]==0){
                visited[y]=1;
                level[y] = level[x] + 1;
                q.push(y);
                infected++;
            }
        }
    }
    if(level[x] <= kn) return 1;
    else return infected; 
}

int main(){
    int serv, kn;
    while (cin>>serv){
        int i, u, v, infect=0;
        cin>> kn;
        memset(visited, 0, sizeof(visited));
        for (i = 0; i <= serv; i++){
            adj[i].clear();
        }
        for (i = 1; i < serv; i++){
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        for (int i = 1; i <= serv; i++){
            infect = max(bfs(i, kn), infect);
        }
        if(infect> serv/2) cout<< infect <<endl;
        else cout << "Impossible revenge!";
    }
    return 0;
}
