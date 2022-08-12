class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        if(amount == 0) return 0;
        vector<int> dp(amount+1,amount+1);
        for(auto ele:dp){
            cout<<ele<<" ";
        }
        int a,j;
        dp[0] = 0;
        
        for(a=1;a<amount+1;a++){
            for(auto c:coins){
                if(a-c>=0){
                    dp[a] = min(dp[a],1+dp[a-c]);
                }
            }
        }
        
        if(dp[amount]!=amount+1) return dp[amount];
        return -1;
    }
};
//coin change problem dynamic programming
 int n = coins.size();
        int m = amount;
        vector<vector<int>> dp(n+1,vector<int>(m+1,m+1));
        
        int i,j;
        for(i=0;i<=n;i++){
            for(j=0;j<=m;j++){
                if(j==0) dp[i][j] = 0;
                else if(i==0) dp[i][j] = m+1;
                else if(j<coins[i-1]){
                    dp[i][j] = dp[i-1][j];
                }
                else{
                    dp[i][j] = min(dp[i-1][j],1+dp[i][j-coins[i-1]]);
                }
                
            }
        }
        
        return dp[n][m]==m+1? -1:dp[n][m];


