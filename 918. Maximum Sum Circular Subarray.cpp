class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int sum=nums[0];
        int maxsofar=nums[0];
        int maxtotal=nums[0];
        int minsofar=nums[0];
        int mintotal=nums[0];
        
        for(int i=1;i<nums.size();i++){
            maxsofar=max(nums[i], maxsofar+nums[i]);
            maxtotal=max(maxtotal,maxsofar);
            minsofar=min(nums[i], minsofar+nums[i]);
            mintotal=min(mintotal,minsofar);
            sum += nums[i];
        }
        
        if(sum == mintotal) return maxtotal;
        return max(maxtotal, sum - mintotal);
    }
};