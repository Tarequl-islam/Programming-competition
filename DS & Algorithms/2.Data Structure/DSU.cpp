#include<bits/stdc++.h>
using namespace std;

int p[105];
int Find(int x){ 
    if(p[x]==x) return x;
    return p[x]=Find(p[x]);
}

int main(){ //CF 277 a.Learning Language.cpp
    int n, m, a, b, c, i, j, k, mx = 0;
    vector<int> ar[120];
    cin>>n>>m;
    for ( i = 0; i <= m; i++) p[i]=i;
    for (i=0; i<n; i++){
        cin>>a;
        if(a==0)mx++; 
        else{ 
            cin>>b;
            c=b;
            ar[i].push_back(b);
        }
        for ( j = 1; j < a; j++){
            cin>>c;
            ar[i].push_back(c);
            //p[p[c]]=p[b];    ......   <---- Never Use This. It Cause a MLE error. 
            p[Find(c)]=Find(b);
        }
    }
    for ( i = 0; i < n; i++){
        for ( j = 0; j < ar[i].size(); j++){
            if(Find(c)!=Find(ar[i][j])){
                mx++;
                p[Find(ar[i][j])]=Find(c);
            }
        }
    }
    cout<<mx<<endl;
    return 0;
}
