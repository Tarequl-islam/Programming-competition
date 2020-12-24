#include <bits/stdc++.h>
using namespace std;
#define MAX_N 20
#define INF 99999999
#define EMPTY_VALUE -1
int w[MAX_N][MAX_N];
int mem[MAX_N];

int f(int u, int n) {
    if (u == n - 1) return 0;
    if (mem[u] != EMPTY_VALUE) return mem[u];
    int ans = INF;
    for (int v = 0;v < n;v++) {
        if (w[u][v] != 0) {
            ans = min(ans, f(v, n) + w[u][v]);
        }
    }
    mem[u] = ans;
    return mem[u];
}
int main(){
    int edges, vertices, weight, u, v, i, ans = 0;
    cin>>edges>>vertices;
    for (int i = 0; i <= vertices; i++) {
        mem[i] = EMPTY_VALUE;
    }
    for(i=0; i<vertices; i++){
        cin>>u>>v>>weight;
        w[u][v]=weight;
        //w[v][u]=weight;
    }
    cout<<f(0, edges)<<endl;
    return 0;
}
