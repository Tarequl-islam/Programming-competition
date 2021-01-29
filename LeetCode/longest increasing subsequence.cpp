#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
int lengthOfLIS(vector<int>& nums) {
    int m = nums.size();
    int mem[2550]={0};
    for (int i=m-1; i >=0; i--){
        int ans = 0;
        for (int j = i+1; j < m; j++){
            if(nums[j]>nums[i])
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
    vector<int> n={10,9,2,5,3,7,101,18};
    Solution s;
    cout << s.lengthOfLIS(n) << endl;
    return 0;
}