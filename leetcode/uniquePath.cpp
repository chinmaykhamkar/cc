class Solution {
public:
    int uniquePaths(int m, int n) {
    
        vector<vector<int>> dp(m,vector<int>(n,0));
        int i,j;
        dp[0][0] = 1;
        for(i=0;i<dp.size();i++){
            for(j=0;j<dp[i].size();j++){
                
                
                if(i==0 && j-1>=0){
                    dp[i][j] = dp[i][j-1];
                }
                if(j==0 && i-1>=0){
                    dp[i][j] = dp[i-1][j];
                } 
                else if(j-1>=0 && i-1>=0){
                    dp[i][j] = dp[i][j-1]+dp[i-1][j];                    
                }
                                
            }
        }
        
        return dp[m-1][n-1];
        
    }
    
};