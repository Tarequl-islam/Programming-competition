#include <bits/stdc++.h>
using namespace std;
#define MX 502
int w[MX][MX];
void Floyed_warshal(int n){
    int i, j, k;
    for (k = 1; k <= n; k++){
        for (i = 1; i <= n; i++){
            for (j = 1; j <= n; j++){
                if(w[i][j] > w[i][k]+ w[k][j])
                    w[i][j] = w[i][k]+ w[k][j];
            }
        }
    }
}
int main(){
    //freopen("inputDijks.txt", "r", stdin);
    while (true) {
        int vertex, edge;
        cin >> vertex >> edge;
        if(vertex+edge==0) break;
        int i, j, u, v, ww, k, o, d, r;
        for (i = 0; i <= vertex; i++) {
            for (j = 0; j <= vertex; j++){
                w[i][j]= INT_MAX;
            }
        }
        for (i = 0; i < edge; i++){
            cin >> u >> v >> ww;
            w[u][v] = ww;
        }
        Floyed_warshal(vertex);
        for (i = 1; i <= vertex; i++) {
            for (j = i+1; j <= vertex; j++){
                cout<<w[i][j]<<" \n";
            }
        }
    }
    return 0;
}