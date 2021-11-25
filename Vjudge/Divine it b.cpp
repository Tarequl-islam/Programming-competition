#include<bits/stdc++.h>
#define ll long long
using namespace std;
typedef struct Node{
        int vv;
        ll weight;
}node;
ll ans[100015];
#define pl pair<ll, int>
priority_queue< pl, vector<pl>, greater<pl> > pq;
int main(){
        int t=1, cs = 1;
        cin >> t;
        while (t--){
                vector<node> g[100005];
                int n, m, u, v, pui, s, t;
                node tmp;
                ll weight;
                scanf("%d %d %d %d", &n, &m, &s, &t);
                while(m--){
                        scanf("%d %d %lld", &u, &v, &tmp.weight);
                        tmp.weight+=12;
                        tmp.vv=v;
                        g[u].push_back(tmp);
                        tmp.vv=u;
                        g[v].push_back(tmp);
                }
                for(int i=1;i<=n;i++){
                        ans[i]=1000000000000;
                }
                u=s;
                v=t;
                pq.push(make_pair(0, u));
                int newver;
                while(!pq.empty()){
                        newver=pq.top().second;
                        if(ans[newver]>pq.top().first){
                                ans[newver]=pq.top().first;
                        }
                        pq.pop();
                        for(int i=0;i<g[newver].size();i++){
                                if((ans[newver]+g[newver][i].weight)<ans[g[newver][i].vv]){
                                        pui=g[newver][i].vv;
                                        weight=ans[newver]+g[newver][i].weight;
                                        pq.push(make_pair(weight, pui));
                                }
                        }
                }
                printf("%lld\n", ans[v]);
        } 
        return 0;
}