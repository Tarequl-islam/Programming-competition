#include <bits/stdc++.h>
using namespace std;
int visited[2005];
vector<int> vec[2005];
int bfs(int s){
    int concom=1;
    visited[s] = 1;
    queue<int> q;
    q.push(s);
    while (!q.empty()){
        int x = q.front();
        q.pop();
        for (int i = 0; i < vec[x].size(); i++){
            int y = vec[x][i];
            if (visited[y] == 0){
                visited[y] = 1;
                q.push(y);
                concom++;
            }
        }
    }
    return concom;
}
int main(){
    int i, j, ver, edg, u, v, w, z;
    while (1){
        int con = 0;
        set<int> nodes;
        set<int>::iterator it;
        cin >> ver >> edg;
        if (ver == 0 && edg==0) break;
        for (i = 0; i <= ver; i++){
            vec[i].clear();
        }
        for (i = 0; i < edg; i++){
            cin >> u >> v >>w;
            vec[u].push_back(v);
            if(w==2) vec[v].push_back(u);
            nodes.insert(u);
            nodes.insert(v);
        }
        for (it = nodes.begin(); it != nodes.end(); it++){
            memset(visited, 0, sizeof(visited));
            z = bfs(*it);
            con+=z;
        }
        if (con/ver== ver)
            cout << "1" << endl;
        else cout << "0" << endl;
    }
}
