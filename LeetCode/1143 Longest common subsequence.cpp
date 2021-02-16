#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int mem[1005][1005];
    int lcsDp(int n, int m, string &S, string &W){
        if(S.length()==n || W.length()==m) return 0;
        if(mem[n][m]!=-1) return mem[n][m];
        int ans=0;
        if(S[n]==W[m]){
            ans=1+lcsDp(n+1, m+1, S, W);
        }
        else{
            int opt1 = lcsDp(n+1, m, S, W);
            int opt2 = lcsDp(n, m+1, S, W);
            ans=max(opt1, opt2);
        }
        return mem[n][m]=ans;
    }
    int longestCommonSubsequence(string S, string W) {
        memset(mem,-1, sizeof(mem));
        return lcsDp(0,0,S, W);
    }
};
int main(){
    string S="hellom", W="hmrll";
    Solution sol;
    cout << sol.longestCommonSubsequence(S, W) << endl;
    return 0;
}