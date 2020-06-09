#include<bits/stdc++.h>
#define WHITE 1
#define GRAY 2
#define BLACK 3
using namespace std;
int adj[100][100];
int color[100];
int node;
int edge;
int Time =1;
int sTime[100];
int fTime[100];
stack <int> ans;
void dfsVisit(int x){
    color[x]=GRAY;
    sTime[x]=Time++;
    for(int i=0; i<node; ++i){
        if(adj[x][i]==1){
            if(color[i]== WHITE) dfsVisit(i);
        }
    }
    color[x]=BLACK;
    fTime[x]=Time++;
    ans.push(x);
}
void dfs(){
    for(int i=0; i<node; ++i){
        color[i] = WHITE;
    }
    for(int i=0; i<node; ++i){
        if(color[i] == WHITE) dfsVisit(i);
    }

}
int main(){
    //freopen("input.txt", "r", stdin);
    int n1, n2;
    cin>>node>>edge;
    for(int i=0; i<edge; ++i){
        cin>>n1>>n2;
        adj[n1][n2]=1;
    }
    dfs();
    cout<<"After Topological Sort: \n";
    while(!ans.empty()){
        cout<<ans.top()<<" ";
        ans.pop();
    }
    cout<<"\n";
    return 0;
}

