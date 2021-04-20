#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int mem[505][505];
    int minDistDp(int n, int m, string &S, string &W){
        int a=S.length();
        int b=W.length();
        if(a==n && b==m) return 0;
        if(a==n) return mem[n][m]=b-m;
        if(b==m) return mem[n][m]=a-n;
        if(mem[n][m]!=-1) return mem[n][m];
        int v0=INT_MAX, v1, v2, v3, ans;
        if(S[n]==W[m]){
            v0=minDistDp(n+1, m+1, S, W);
        }
        v1 = minDistDp(n+1, m, S, W)+1;
        v2 = minDistDp(n, m+1, S, W)+1;
        v3 = minDistDp(n+1, m+1, S, W)+1;
        
        ans=min(v0,min(v1,min(v2,v3)));
        return mem[n][m]=ans;
    }
    int minDistance(string S, string W) {
        memset(mem,-1, sizeof(mem));
        return minDistDp(0,0,S, W);
    }
};
int main(){
    string S = "horse", W = "ros";
    Solution sol;
    cout << sol.minDistance(S, W) << endl;
    return 0;
}