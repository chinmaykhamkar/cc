class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>> dp(21,vector<int>(2001,-1));
        
        int ans = helper(0,0,target,nums,dp);
      
        return ans;
    }
    int helper(int idx,int sum,int target,vector<int>& nums,vector<vector<int>>& dp){
        if(idx == nums.size()){
            if(sum == target) return 1;
            else return 0;
        }
        if(dp[idx][sum+1000]!=-1) return dp[idx][sum+1000];
        
        int temp = helper(idx+1,sum+nums[idx],target,nums,dp)+helper(idx+1,sum-nums[idx],target,nums,dp);
        return dp[idx][sum+1000]=temp;
    }
};

// [1,1,1] =>3