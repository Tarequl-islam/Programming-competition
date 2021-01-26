#include <iostream>
#define Max 100
int parent[Max];
int size;
void makeSet(int n){
    parent[n]=n;
}

int Find(int rep){
    if (parent[rep] == rep){
        return rep;
    }
    return parent[rep] = Find(parent[rep]);
}
void Union(int a,int b){
    int u = Find(a);
    int v = Find(b);
    /*if(u == v){
        printf("Frnds");
    } else */
    parent[u]=v;
}
int main(int argc, const char * argv[]){

    for (int i=0; i < size; i++){
        makeSet(i);
    }
    return 0;
}
