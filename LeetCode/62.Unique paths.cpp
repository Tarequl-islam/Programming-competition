#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int mem[105][105];
    int n, m;
    int dp(int i, int j){
        if(i==n-1 && j==m-1) return 1;
        if(i>=n || j>=m) return 0;
        if(mem[i][j]!=-1) return mem[i][j];
        int val1 = dp(i+1, j);
        int val2 = dp(i, j+1);
        return mem[i][j]=val1+val2;
    }
    int uniquePaths(int nn, int mm){
        n=nn; m=mm;
        memset(mem, -1, sizeof(mem));
        return dp(0,0);
    }
};
int main(){
    Solution sol;
    cout << sol.uniquePaths(7, 3) << endl;
    return 0;
}