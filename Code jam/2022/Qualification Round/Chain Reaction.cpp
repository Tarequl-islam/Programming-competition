#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define CLR(a, b) memset(a, b, sizeof(a))
typedef pair<ll, ll> pl;
const int MAXN = 100 * 1000 + 10;

ll ar[MAXN];
int visited[MAXN];
vector<pl> vec[MAXN];
ll result[MAXN];

void dfs(pl at){
    visited[at.F] = 1;
    ll mn = INT_MAX;
    ll minIdx = 0;
    if(vec[at.F].size()==1){ 
        mn = vec[at.F][0].S;
        minIdx = vec[at.F][0].F;
    }
    for (int i = 0; i < vec[at.F].size(); i++){
        if(visited[vec[at.F][i].F]==0)
            dfs(vec[at.F][i]);
        
        if(result[vec[at.F][i].F] != 0) {
            if(result[vec[at.F][i].F] <= mn){
                mn = result[vec[at.F][i].F];
                minIdx = vec[at.F][i].F;
            }
        }
        else if(vec[at.F][i].S <= mn){
            mn = vec[at.F][i].S;
            minIdx = vec[at.F][i].F;
        }
    }
    if(vec[at.F].size()==0){
        result[at.F] = at.S;
    }
    else {
        result[at.F] = max(at.S, mn);
        result[minIdx] = 0;
    }
}
int main(){
    int t=1, cs = 1;
    cin >> t;
    while (t--){
        ll i,j,ver,edg,u,v,z=0, ans = 0;
        CLR(visited, 0);
        CLR(result, 0);
        CLR(vec, 0);
        //for(i=0; i<ver; i++) vec[i].clear();
        cin>>ver;
        for(i=0; i<ver; i++) sl(ar[i]);
        for(i=0; i<ver; i++){
            sl(u);
            vec[u].pb(mp(i+1, ar[i]));
        }
        for(i=0; i<vec[0].size(); i++) 
            dfs(vec[0][i]);
        for(i=0; i<=ver; i++) ans += result[i];
        cout<<"Case #"<<cs++<<": "<<ans<<" "<<endl;
    }
    return 0;
}