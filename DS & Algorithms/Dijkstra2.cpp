#include <bits/stdc++.h>
using namespace std;
#define MX 100
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
    for (int i = 0; i < vertex; i++) {
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
        for (int i= 0; i< vertex; i++){
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
    while (true) {
        cin >> vertex >> edge;
        if(vertex+edge==0) break;
        int i, u, v, w;
        for (i = 0; i < edge; i++){
            cin >> u >> v >> w;
            adj[u][v] = w;
        }
        Dijkstra(0);
        cout<<"Vertex\tCost\tParent\n";
        for ( i = 0; i < vertex; i++){
            cout<<items[i].n<<"\t"<<items[i].cost<<"\t"<<items[i].p<<endl;
        }
    }
    return 0;
}