#include <bits/stdc++.h>
using namespace std;
struct Edge{
    int u, v, w;
};
bool operator<(Edge a, Edge b){
    return a.w < b.w;
}
vector<Edge> E;
int p[200002];
int Find(int x){
    if(p[x]==x) return x;
    return p[x]= Find(p[x]);
}
void Kruskals(){
    sort(E.begin(), E.end());
    int sz= E.size();
    int ans =0;
    for (int i = 0; i < sz; i++){
        if(Find(E[i].u) != Find(E[i].v)){
            p[p[E[i].u]]=p[E[i].v];
            ans+= E[i].w;
        }
    }
    cout<<"minimum cost: "<<ans<<endl;
}
int main(){
    //freopen("input.txt", "r", stdin);
    int vertex, edge, i;
    while (true){
        cin >> vertex >> edge;
        if(vertex+edge==0) break;
        for (int i = 0; i <= vertex; i++){
            p[i]=i;
        }
        E.clear();
        for (i = 1; i <= edge; i++){
            Edge e;
            cin >> e.u >> e.v >> e.w;
            E.push_back(e);
        }
        Kruskals();
    }
    return 0;
}