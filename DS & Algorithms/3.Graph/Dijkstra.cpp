#include <bits/stdc++.h>
using namespace std;
struct Node{
    int at, cost;
    Node(int _at, int c){
        at= _at;
        cost = c;
    }
};
bool operator < (Node a, Node b){
    return a.cost > b.cost;
}
struct Edge{
    int v, w;
};
vector<Edge> adj[100];
priority_queue<Node> pq;
int dist[100], p[100];
void Dijkstra(int s){
    p[s] = s;
    dist[s] = 0;
    pq.push(Node(s, 0));
    while (!pq.empty()){
        Node u=pq.top();
        pq.pop();
        if(u.cost != dist[u.at]) continue;
        for (Edge e : adj[u.at]){
            if (dist[e.v] > u.cost+ e.w){
                dist[e.v] = u.cost+ e.w;
                p[e.v] = u.at;
                pq.push(Node(e.v, dist[e.v]));
            }   
        }   
    }
}
int main(){
    //freopen("input.txt", "r", stdin);
    int vertex, edge, i, u;
    while (true){
        cin >> vertex >> edge;
        if(vertex+edge==0) break;
        for (int i = 0; i <= vertex; i++){
            adj[i].clear();
            p[i]= -1;
            dist[i]= INT_MAX;
        }
        for (i = 1; i <= edge; i++){
            Edge e;
            cin >> u >> e.v >> e.w;
            adj[u].push_back(e);
        }
        Dijkstra(0);
        cout<<"Vertex\tCost\tParent\n";
        for (i = 0; i < vertex; i++) {
            cout<<i<<"\t"<<dist[i]<<"\t"<<p[i]<<endl;
        }
    }
    return 0;
}