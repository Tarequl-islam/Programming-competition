#include <bits/stdc++.h>
using namespace std;
#define MX 110
int adj[MX][MX];
int vertex, edge;
struct Node{
    int n, p, cost;
    bool vis;
};
bool operator<(Node a, Node b){
    return a.cost > b.cost;
}
Node items[MX];
priority_queue<Node> pq;
void Dijkstra(int s){
    for (int i = 0; i <= vertex; i++) {
        items[i].n = i;
        items[i].cost = INT_MAX;
        items[i].p = -1;
        items[i].vis = false;
    }
    items[s].cost = 0;
    items[s].p = s;
    pq.push(items[s]);
    while (!pq.empty()){
        Node u=pq.top();
        pq.pop();
        if(u.vis == true) continue;
        for (int i= 1; i<= vertex; i++){
            if (adj[u.n][i] != 0){
                if (items[i].cost > u.cost+ adj[u.n][i]) {
                    items[i].cost = u.cost+ adj[u.n][i];
                    items[i].p = u.n;
                    pq.push(items[i]);
                }
            }
        }  
        items[u.n].vis = true;
    }
}
int main(){
    //freopen("inputDijks.txt", "r", stdin);
    cin >> vertex >> edge;
    if(vertex+edge==0) return 0;
    int i, u, v, w;
    for (i = 0; i < edge; i++){
        cin >> u >> v >> w;
        adj[u][v] = w;
        adj[v][u] = w;
    }
    Dijkstra(1);

    vector<int> vv;
    int a = vertex;
    for(int j=vertex; a!=1 && j>=0; j--){
        vv.push_back(a);
        for(i = 1; i<=vertex; i++){
            if(items[i].n==a){
                a = items[i].p;
                break;
            }
        }
    }
    cout<<1<<" ";
    for(i = vv.size(); i>=0; i--){
        cout<<vv[i]<<" ";
    }
    return 0;
}