class Solution {
public:
    int rob(vector<int>& nums) {

        int n=nums.size();
        if(nums.empty()) return 0;
        if(n == 1) return nums[0];
        int prev1=nums[0];
        int prev2=max(nums[0],nums[1]);
        int curr=prev2;
        for(int i=2;i<n;i++){
            curr=max(prev2, prev1+nums[i]);
            prev1=prev2;
            prev2=curr;
        }
        return curr;
    }
};