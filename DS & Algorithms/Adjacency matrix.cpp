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

void dfsVisit(int x){
    color[x]=GRAY;
    sTime[x]=Time;
    ++Time;
    for(int i=0; i<node; ++i){
        if(adj[x][i]==1){
            if(color[i]==WHITE){
                dfsVisit(i);
            }
        }
    }
    color[x]=BLACK;
    fTime[x]=Time;
    ++Time;
}
void dfs(){
    for(int i=0; i<node; ++i){
        color[i]==WHITE;
    }
//    for(int i=0; i<node; ++i){
//        if(color[i]==WHITE){
//            dfsVisit(i);
//        }
//    }
    dfsVisit(2);
}
int main(){
    freopen("input.txt", "r", stdin);
    int n1, n2;
    //cout<<"Enter the number of node and edge: ";
    cin>>node>>edge;
    for(int i=0; i<edge; ++i){
        cin>>n1>>n2;
        adj[n1][n2]=1;
        //adj[n2][n1]=1;
    }
    dfs();
    cout<<"\n";
    for(int i=0; i<node; ++i){
        cout<<"Node: "<<(char)('A'+i)<<" "<<sTime[i]<<" "<<fTime[i]<<endl;
    }

//  code for print connections
    cout<<"\n\n\n";
    for(int i=0; i<node; ++i){
        for(int j=0; j<node; ++j){
            cout<<adj[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
    for(int i=0; i<node; ++i){
        if(adj[1][i]==1) cout<<i<<" ";
    }
    return 0;
}
