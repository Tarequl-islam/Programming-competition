#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int k=1; k<=t; k++){
        int n, i, j, arr[102][102], trace=0, r=0, c=0;
        cin>>n;
        for(i=1; i<=n; i++){
            vector<int> v(n+2, 0);
            int rr=0;
            for(j=1; j<=n; j++){
                cin>>arr[i][j];
                if(v[arr[i][j]]!=0) rr++;
                v[arr[i][j]]=1;

            }
            if(rr!=0)r++;
        }
        for(i=1; i<=n; i++){
            vector<int> vc(n+2, 0);
            int rr=0;
            for(j=1; j<=n; j++){
                if(vc[arr[j][i]]!=0) rr++;
                vc[arr[j][i]]=1;

            }
            if(rr!=0)c++;
        }
        for(i=1; i<=n; i++){
            trace+= arr[i][i];
        }
        cout<<"Case #"<<k<<": "<<trace<<" "<<r<<" "<<c<<endl;
    }
    return 0;
}
