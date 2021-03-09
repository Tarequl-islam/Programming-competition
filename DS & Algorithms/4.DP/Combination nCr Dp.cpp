#include<bits/stdc++.h>
using namespace std;
#define MAX_N 200
#define EMPTY_VALUE -1
int mem[MAX_N][MAX_N];

int dp(int n, int k){
    if(mem[n][k]!=-1) return mem[n][k];
    if(k>n) return 0;
    if(k==0||k==n) return 1;
    return mem[n][k]= dp(n-1, k-1)+dp(n-1, k);
}
/*int combinationIterative(int n, int k) {
    mem[0][0]=1;
    for(int i=1; i<=n; i++){
        mem[i][0]=1;
        for(int j=1; j<=min(i,k); j++){
            mem[i][j]=mem[i-1][j-1]+mem[i-1][j];
        }
    }
    return mem[n][k];
} */
int main(){
    int n, k;
    cin>>n>>k;
    memset(mem, -1, sizeof(mem));
    cout<<dp(n,k)<<endl;
    return 0;
}
