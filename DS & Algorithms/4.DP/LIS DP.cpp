#include<bits/stdc++.h>
using namespace std;
#define MAX_N 20
#define EMPTY_VALUE -1
int memo[MAX_N +5];
int NxtIdx[MAX_N+5];
int f(int i, vector<int> &A) {
    if (memo[i]!=EMPTY_VALUE) return memo[i]; 
    int ans=0;
    for (int j = i+1; j < A.size(); j++){
        if(A[j]>A[i]){
            int r = f(j, A);
            if(r>ans){
                ans = r;
                NxtIdx[i]=j;
            }
        }
    }
    memo[i] = ans+1;
    return memo[i];
}
int main(){
    int n, m, a, b, c, i, j, k, ans = 0, si=-1;
    vector<int>ar;
    cin>>n;
    for ( i = 0; i < n; i++){
        cin>>a;
        ar.push_back(a);
    }
    for (int i = 0; i <= MAX_N; i++) {
        memo[i] = EMPTY_VALUE;
        NxtIdx[i]=EMPTY_VALUE;
    }
    for ( i = 0; i < ar.size(); i++){
        int res = f(i, ar);
        if(res>ans){
            ans = res;
            si=i;
        }
    }
    while(si!=-1){
        cout<<ar[si]<<" ";
        si = NxtIdx[si];
    }
    return 0;
}
