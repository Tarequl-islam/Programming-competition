#include<bits/stdc++.h>
#define WHITE 1
#define GRAY 2
#define BLACK 3
using namespace std;
int adj[100][100];
int color[100];
int node;
int edge;
int parent[100];
int dis[100];
void bfs(int startingNode){
    for(int i=0; i<node; ++i){
        color[i] = WHITE;
        dis[i] = INT_MIN;
        parent[i] = -1;
    }
    dis[startingNode] = 0;
    parent[startingNode] = -1;
    queue<int> q;
    q.push(startingNode);
    while(!q.empty()){
        int x = q.front();
        q.pop();
        color[x] = GRAY;
        cout<<x<<" ";
        for(int i=0; i<node; ++i){
            if(adj[x][i]==1){
                if(color[i]== WHITE){
                    dis[i]=dis[x]+1;
                    parent[i]=x;
                    q.push(i);
                }
            }
        }
    }
}
int main(){
    freopen("input-bfs.txt", "r", stdin);
    int n1, n2;
    cin>>node>>edge;
    for(int i=0; i<edge; ++i){
        cin>>n1>>n2;
        adj[n1][n2]=1;
    }
    bfs(0);

//  code for print connections
    cout<<"\n\n\n";
    for(int i=0; i<node; ++i){
        for(int j=0; j<node; ++j){
            cout<<adj[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

