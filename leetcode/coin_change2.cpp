class Solution {
public:
    int change(int amount, vector<int>& coins) {
        
        int i,j;
        int n=coins.size();
        int m = amount;
        vector<vector<int>> dp(n+1,vector<int>(m+1));
        dp[0][0] = 0;
        for(i=1;i<n+1;i++){
            dp[i][0] = 1;
        }
        for(j=1;j<m+1;j++){
            dp[0][j] = 0;
        }
        for(i=1;i<n+1;i++){
            for(j=1;j<m+1;j++){
                if(j<coins[i-1]){
                    dp[i][j] = dp[i-1][j];
                }
                else{
                    dp[i][j] = dp[i-1][j]+dp[i][j-coins[i-1]];
                }
            }
        }
        
        // for(i=0;i<n+1;i++){
        //     for(j=0;j<m+1;j++){
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        
        return dp[n][m];
    }
};