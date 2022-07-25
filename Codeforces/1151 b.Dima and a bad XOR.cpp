#include<bits/stdc++.h>
using namespace std;

int main(){ //s: 10.32 am - e: 0.00am;
    int t=1, cs = 1;
    //cin >> t;
    while (t--){
        int n, m, a, b, c, i, j, k, mx = 0, mn = 0;
        cin>>n>>m;
        int ar[n+5][m+5];
        for (i = 0; i < n; i++){
            for(j=0; j<m; j++)
                cin>>ar[i][j];
        }
        vector<int> va;
        if(n==1){
            for(i=0; i<m; i++){
                if(ar[0][i]!=0){
                    mx = ar[0][i];
                    va.push_back(i+1);
                }
            }
        }
        else{ 
            mx = ar[0][0];
            va.push_back(1);
        }
        for (i = 1; i < n; i++){
            mx ^= ar[i][0];
            va.push_back(1);
        }
        if(mx==0){
            mn = 1;
            for (i = 0; i < n; i++){
                if(mn == 0) break; 
                for(j=1; j<m; j++){
                    if(ar[i][0] != ar[i][j]){
                        va[i] = j+1;
                        mn = 0;
                        break; 
                    }
                }
            }
        }
        if(mn == 0){
            cout << "TAK\n";
            for(i=0; i<n; i++) cout<<va[i]<<" ";
        }
        else cout<<"NIE\n";
    }
    return 0;
}
