class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int n=10001;
        vector<int> dp(n);
        vector<int> sum(n);
        
        //create the freq array
        for(auto num:nums){
            sum[num] += num;
        }
        //normal house robber logic
        dp[0]=sum[0];
        dp[1]=sum[1];
        
        for(int i=2;i<n;i++){
            dp[i] = max(dp[i-1], sum[i]+dp[i-2]);
        }
        return dp[n-1];
    }
};