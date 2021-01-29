#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
int singleNumber(vector<int>& nums) {
    unordered_map<int, int> m;
    for(int i=0; i<nums.size(); i++){
        if(m.find(nums[i])==m.end()) 
            m.emplace(nums[i], 1);
        else m[nums[i]]=2;
    }
    for(int i=0; i<nums.size(); i++){
        if(m[nums[i]]==1) return nums[i];
    }
    return 0;
}
};
int main(){
    vector<int> n={1,1,3,4,5,4,3};
    Solution s;
    cout<<s.singleNumber(n)<<endl;
    return 0;
}