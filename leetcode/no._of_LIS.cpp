class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
       int i,j,n=nums.size();
        vector<int> dp(n,1);
        vector<int> count(n,1);
        int temp=1,ans=0;
        for(i=0;i<n;i++){
            for(j=0;j<i;j++){
                if(nums[i]>nums[j]){
                    if(dp[j]+1>dp[i]){
                        dp[i] = dp[j]+1;
                        temp = max(temp,dp[i]);
                        count[i] = count[j];  
                    }
                    else if(dp[j]+1 == dp[i]){
                        count[i]+=count[j];
                    }
                                          
                }
                
            }
        }
        cout<<temp;
        for(i=0;i<n;i++){
            if(temp == dp[i]){
                ans+=count[i];
            }
        }
        
        
        return ans;
    }
};