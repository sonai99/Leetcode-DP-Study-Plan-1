class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxReachable=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(maxReachable < i) return false;
            maxReachable = max(maxReachable, i+nums[i]);
        }
        return true;
    }
};