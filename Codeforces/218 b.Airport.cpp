#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, m, a, maxp=0, minp=0;
    int ar[1005];
    int br[1005];
    cin>>n>>m;
    for (int i = 0; i < m; i++){
        cin>>ar[i];
        br[i]=ar[i];
    }
    for (int i = 0; i < n; i++){
        int mxi=0, mni=0;
        while(br[mni]<=0) mni++;
        for (int j = 0; j < m; j++){
            if(ar[j]> ar[mxi]){
                mxi=j;
            }
            if(br[j]< br[mni] && br[j] !=0){
                mni=j;
            }
        }
        maxp+=ar[mxi];
        ar[mxi]--;
        minp+=br[mni];
        br[mni]--;
    }
    cout <<maxp<<" "<<minp<< endl;
    return 0;
}
