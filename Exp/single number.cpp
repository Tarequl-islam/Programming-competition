#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
int singleNumber(vector<int>& nums) {
    vector<int> n (nums.size(), 0);
    for(int i=0; i<nums.size(); i++){
        n[nums[i]]++;
    }
    for(int i=0; i<nums.size(); i++){
        if(n[i]==1) return i;
    }
    return 0;
}
};
    int main(){
        vector<int> v={1,3,4,3,1};
        Solution ss;
        cout<<ss.singleNumber(v)<<endl;
        return 0;
    }

