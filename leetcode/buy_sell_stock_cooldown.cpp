class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i,n=prices.size();
        if(n<=1) return 0;
        if(n==2){
            return prices[1]>prices[0]?prices[1]-prices[0]:0;
        }
        vector<vector<int>> dp(n,vector<int>(2));
        
        /*
        case 1: have stock on day i => dp[i][1]
        a) bought today so dp[i-2][0]-prices[i]
        b)carry fowrard previous stock dp[i-1][1]
        
        case 2: have no stock on day i => dp[i][0]
        a) sold today so dp[i-1][1]+prices[i]
        b) carry forward previous no stock dp[i-1][0]
        */
        
        dp[0][0] = 0;
        dp[0][1] = -prices[0];
        dp[1][0] = max(dp[0][1]+prices[1],dp[0][0]); // max(-prices[0]+prices[1],0)
        dp[1][1] = max(-prices[1],dp[0][1]); //max(-prices[1],0)
        for(i=2;i<n;i++){
            dp[i][0] = max(dp[i-1][1]+prices[i],dp[i-1][0]); //sell case 2
            dp[i][1] = max(dp[i-2][0]-prices[i],dp[i-1][1]); //buy case 1
            
        }
        
        return dp[n-1][0];
        
    }
};