#include <bits/stdc++.h>
using namespace std;
int edges, vertices, weight, u, v, i, ans = 0;
int adj[100][100];
bool visited[100];
vector<int> vec;
struct Node{
    int v, cost;
    Node(int vv, int cc){
        v= vv;
        cost = cc;
    }
};
bool operator<(Node a, Node b){
    return a.cost > b.cost;
}
void Prims(){
    priority_queue<Node> pq;
    pq.push(Node(0, 0));
    while (!pq.empty()){
        Node temp = pq.top();
        pq.pop();
        if(visited[temp.v]) continue;
        ans+= temp.cost;
        vec.push_back(temp.v);
        visited[temp.v] = 1;
        for(i = 0; i<vertices; i++){
            if(adj[temp.v][i]!=0 && visited[i]==0)
                pq.push(Node(i, adj[temp.v][i]));
        }
    }
    cout<<"minimum cost is: "<<ans<<endl;
    cout<<"Shortest Path is: ";
    for (int i = 0; i < vec.size(); i++){
        cout<<vec[i]<<" ";
    }
    
}
int main(){
    cin>>edges>>vertices;
    for(i=0; i<vertices; i++){
        cin>>u>>v>>weight;
        adj[u][v]=weight;
        adj[v][u]=weight;
    }
    Prims();
    return 0;
}
