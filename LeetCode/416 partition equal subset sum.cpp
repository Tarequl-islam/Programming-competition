#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> ar;
    int mem[205][2005];
    bool dp(int i, int W){
        if(W==0) return true;
        if(i>=ar.size() || W<0) return false;
        if(mem[i][W]!=-1) return mem[i][W];
        return mem[i][W]=dp(i+1, W-ar[i])||dp(i+1, W);
    }
    bool canPartition(vector<int> &nums){
        memset(mem, -1, sizeof(mem));
        int mx=0;
        ar=nums;
        for (int i = 0; i < nums.size(); i++){
            mx+=nums[i];
        }
        if(mx%2==0) return dp(0, mx/2);
        else return false;
    }
};
int main(){
    vector<int>v={1,5,11,5};
    Solution sol;
    cout << sol.canPartition(v) << endl;
    return 0;
}