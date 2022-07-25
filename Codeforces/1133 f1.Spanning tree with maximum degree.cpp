#include<bits/stdc++.h>
using namespace std;
const int sz = 200005;
int visited[sz];
int cnt[sz];
vector<int>vec[sz];
vector<pair<int,int>>ans;
int bfs(int s){
    visited[s]=1;
    queue<int>q;
    q.push(s);
    while(!q.empty ()){
        int x=q.front();
        q.pop();
        for(int i=0; i<vec[x].size(); i++){
            int y=vec[x][i];
            if(visited[y]==0){
                visited[y]=1;
                q.push(y);
                ans.push_back(make_pair(x, y));
            }
        }
    }
    return 1;
}
int main(){ // 09.15 - 09.55
    int i,j,ver,edg,u,v,z=0, mx = 0;
    cin>>ver>>edg;
    for(i=0; i<edg; i++){
        cin>>u>>v;
        cnt[u]++;
        cnt[v]++;
        vec[u].push_back(v);
        vec[v].push_back(u);
    }
    for(i = 1; i<= ver; i++){
        if(cnt[i] > mx){
            mx = cnt[i];
            j = i;
        }
    }
    z = bfs(j);
    for(i = 0; i < ans.size(); i++)
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
}
