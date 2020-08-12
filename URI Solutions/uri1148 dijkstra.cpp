#include <bits/stdc++.h>
using namespace std;
#define MX 502
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
int Dijkstra(int s, int d){
    for (int i = 0; i <= vertex; i++) {
        items[i].n = i;
        items[i].cost = INT_MAX;
        items[i].vis = false;
    }
    items[s].cost = 0;
    pq.push(items[s]);
    while (!pq.empty()){
        Node u=pq.top();
        pq.pop();
        if(u.vis == true) continue;
        for (int i= 1; i<= vertex; i++){
            if (adj[u.n][i] != INT_MAX) {
                if (items[i].cost > u.cost+ adj[u.n][i]) {
                    items[i].cost = u.cost+ adj[u.n][i];
                    pq.push(items[i]);
                }
            }
        }  
        items[u.n].vis = true;
    }
    return items[d].cost;
}
int main(){
    //freopen("inputDijks.txt", "r", stdin);
    while (true) {
        cin >> vertex >> edge;
        if(vertex+edge==0) break;
        int i, u, v, w, k, o, d, r;
        for (i = 0; i <= vertex; i++) {
            for (int j = 0; j <= vertex; j++){
                adj[i][j]= INT_MAX;
            }
        }
        for (i = 0; i < edge; i++){
            cin >> u >> v >> w;
            adj[u][v] = w;
            if (adj[v][u] != INT_MAX) adj[u][v] = adj[v][u] = 0;
        }
        cin>>k;
        for ( i = 0; i < k; i++){
            cin>>o>>d;
            r = Dijkstra(o, d);
            if (r == INT_MAX) cout<<"Nao e possivel entregar a carta\n";
            else cout<<r<<endl;
        }
        cout<<endl;
    }
    return 0;
}