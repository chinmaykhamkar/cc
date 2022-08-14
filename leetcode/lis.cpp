class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int i,j;
        int n=nums.size();
        int ans = 1;
        vector<int> dp(n,1);
        for(i=0;i<n;i++){
            for(j=0;j<i;j++){
                if(nums[i]>nums[j]){
                    dp[i] = max(dp[i],1+dp[j]);
                    ans = max(ans,dp[i]);
                }
            }
        }
        return ans;
    }
};