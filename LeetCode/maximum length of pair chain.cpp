#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
int findLongestChain(vector<vector<int>>& nums) {
    int m = nums.size();
    sort(nums.begin(), nums.end());
    int mem[2550]={0};
    for (int i=m-1; i >=0; i--){
        int ans = 0;
        for (int j = i+1; j < m; j++){
            if(nums[j][0]>nums[i][1])
                ans = max(ans, mem[j]);
        }
        mem[i]= ans+1;
    }
    int fa=0;
    for (int i = 0; i <= m; i++)
        fa=max(fa, mem[i]);
    
    return fa;
}
};
int main(){
    vector<vector<int>> n={{1,2},{2,3},{3,4}};
    Solution s;
    cout << s.findLongestChain(n) << endl;
    return 0;
}