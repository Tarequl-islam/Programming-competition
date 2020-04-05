#include<bits/stdc++.h>
#define Max 100000
using namespace std;
int parent[Max];
int size;
int Find(int rep){
    if (parent[rep] == rep){
        return rep;
    }
    return parent[rep] = Find(parent[rep]);
}
void Union(int a,int b){
    int u = Find(a);
    int v = Find(b);
    parent[u]=v;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        map<string, int> names;
        map<string, int> :: iterator it;
        string a, b;
        int n, x, y;
        cin>>n;
        for(int i=0; i<n; i++) {
            cin>>a>>b;
            if(names.find(a) == names.end()){
                x = names.size();
                names[a] = x;
                parent[x]=x;

            } else {
                x = names[a];
            }
            if(names.find(b) == names.end()){
                y = names.size();
                names[b] = y;
                parent[y]=y;
            } else {
                y = names[b];
            }
            Union(x,y);

        }
        for(it=names.begin(); it!= names.end(); it++)
            cout<<it->first<<" parent= "<<parent[it->second]<<endl;
    }
    return 0;
}
