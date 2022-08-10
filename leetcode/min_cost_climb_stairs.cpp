class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int i,n=cost.size();
        vector<int> dp(n);
        if(n==2) return min(cost[0],cost[1]);
        
        for(i=n-1;i>=0;i--){
            if(i==n-1 || i==n-2) dp[i] = cost[i];  
            else{
                dp[i] = cost[i] + min(dp[i+1],dp[i+2]);
            }
        }
        for(auto ele:dp){
            cout<<ele<<" ";
        }
        
        
        return min(dp[0],dp[1]);
        
    }
};