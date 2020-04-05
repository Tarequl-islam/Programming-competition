#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int k=1; k<=t; k++){
        int n, j, i, f, l, a, b, c=0, sl, imp=0, min=1440, number=-1;
        bitset<1442> cb;
        bitset<1442> jb;
        bitset<1001> bb;
        vector<pair<int, int>> vp;
        cin>>n;
        for(i=1; i<=n; i++){
            cin>>a>>b;
            vp.push_back(make_pair(a, b));
        }
        for(i=1; i<=n; i++){
            min=1440;
            for(j=0; j<n; j++){
                if(vp[j].first<min && vp[j].first>number){
                    min= vp[j].first;
                    sl=j;
                }
            }
            f=a=number=vp[sl].first; l=b=vp[sl].second; c=0;
            while(1){
                if(f == l){
                    c=1;
                    break;
                }
                if(cb[f] == 1) break;
                f++;
            }
            if(c==0){
                bb[sl]=0;
                while(a<b){
                    if(jb[a]==1){
                        imp=1;
                        break;
                    }
                    jb[a]=1;
                    a++;
                }
            }else{
                bb[sl]=1;
                while(a<b){
                    cb[a]=1;
                    a++;
                }
            }
        }
        if(imp==1) cout<<"Case #"<<k<<": IMPOSSIBLE";
        else {
            cout<<"Case #"<<k<<": ";
            for(i=0; i<n;i++){
                if(bb[i]==1) cout<<'C';
                else cout<<'J';
            }
        }
        cout<<endl;
    }
    return 0;
}
