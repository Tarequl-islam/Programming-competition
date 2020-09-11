#include<bits/stdc++.h>
using namespace std;
int edges, vertices;
struct Edge{
    int u, v, w;
};
vector<Edge> E;
int dist[100];
void Bellman_ford(int s){
    for (int i = 1; i <= vertices; i++){
        dist[i]= INFINITY;
    }
    dist[s] = 0;
    for (int i = 1; i < vertices; i++){
        for(Edge e: E){
            if (dist[e.v] > dist[e.u]+e.w){
                dist[e.v] = dist[e.u]+e.w;
            }
        }
    }
}
int main(){
    //freopen("inputDijks.txt", "r", stdin);
    while (true){
        cin >> vertices >> edges;
        if (vertices + edges == 0)
            break;
        int i, uu, vv, ww;
        Edge e;
        for (i = 0; i < edges; i++){
            cin >> e.u >> e.v >> e.w;
            // e.u = uu; e.v = vv; e.w = ww;
            E.push_back(e);
            // e.u = vv; e.v = uu;
            // E.push_back(e);
        }
        Bellman_ford(1);
        cout << "Vertex\tCost\n";
        for (i = 1; i <= vertices; i++){
            cout << i << "\t" << dist[i] << endl;
        }
    }
    return 0;
}