#include <bits/stdc++.h>
using namespace std;
struct Edge{
    int u, v, w;
};
bool operator<(Edge a, Edge b){
    return a.w < b.w;
}
vector<Edge> E;
int p[100];
int Find(int x){
    if(p[x]==x) return x;
    return p[x]= Find(p[x]);
}
int Kruskals(){
    sort(E.begin(), E.end());
    int sz= E.size();
    int ans =0;
    for (int i = 0; i < sz; i++){
        if(Find(E[i].u) != Find(E[i].v)){
            p[p[E[i].u]]=p[E[i].v];
            ans+= E[i].w;
        }
    }
    cout<<"Cost of MST: "<<ans<<endl;
}
int main()
{
    //freopen("input.txt", "r", stdin);
    int vertex, edge, i;
    cin >> vertex >> edge;
    for (i = 1; i <= edge; i++){
        Edge e;
        cin >> e.u >> e.v >> e.w;
        E.push_back(e);
    }
    return 0;
}