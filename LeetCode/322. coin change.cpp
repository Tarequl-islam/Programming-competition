#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
#define INF 999999999
    int mem[20][10005];
    int n;
    vector<int> C;
    int dp(int i, int W){
        if(W<0) return INF;
        if(W==0) return 0;
        if(i==n) return INF;
        if(mem[i][W]!=-1) return mem[i][W];
        int val1 = 1+dp(i, W-C[i]);
        int val2 = dp(i+1, W);
        int ans = min(val1, val2);
        return mem[i][W]=ans;
    }
    int coinChange(vector<int>& coins, int amount) {
        memset(mem, -1, sizeof(mem));
        C=coins;
        n=coins.size();
        int a = dp(0, amount);
        return (a>=INF? -1: a);
    }
};
int main(){
    vector<int> v={2, 5, 9, 13, 15};
    Solution sol;
    cout << sol.coinChange(v, 22) << endl;
    return 0;
}