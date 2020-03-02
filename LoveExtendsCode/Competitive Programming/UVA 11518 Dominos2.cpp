#include<bits/stdc++.h>
using namespace std;
vector<int> vec[10001];
bool visited[10001];
void dfsVisit(int n){
    visited[n]=true;
    for(int i=0; i<vec[n].size(); i++){
        int x= vec[n][i];
        if(visited[x]==false) dfsVisit(x);
    }
}
int main(){
    //freopen("input-bfs.txt", "r", stdin);
    int t;
    cin>>t;
    while(t--){

        int node, edge, k, kt;
        int n1, n2;
        cin>>node>>edge>>k;
        for(int i=0; i<=node; ++i){
            visited[i]=false;
            vec[i].clear();
        }
        for(int i=0; i<edge; ++i){
            cin>>n1>>n2;
            vec[n1].push_back(n2);
            //vec[n2].push_back(n1);
        }
        while(k--){
            cin>>kt;
            dfsVisit(kt);
        }
        int num=0;
        for(int i=0; i<=node; ++i){
            if(visited[i]) num++;
        }
        cout<<num<<"\n";
    }
    return 0;
}



