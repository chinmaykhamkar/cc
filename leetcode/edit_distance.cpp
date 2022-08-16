class Solution {
public:
    int minDistance(string word1, string word2) {
        
        int i,j,n=word1.size(),m=word2.size();
        if(n==0 && m==0) return 0;
        if(n==0 && m!=0) return m;
        if(n!=0 && m==0) return n;
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
         
        
        for(i=1;i<n+1;i++){
            dp[i][0] = i;
        }
        for(j=1;j<m+1;j++){
            dp[0][j] = j;
        }
        
        for(i=1;i<n+1;i++){
            for(j=1;j<m+1;j++){
                if(word1[i-1] == word2[j-1]){
                    dp[i][j] = dp[i-1][j-1];
                }
                else{
                    dp[i][j] = 1+min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
                }
            }
        }
        
        for(i=0;i<n+1;i++){
            for(j=0;j<m+1;j++){
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
        
        return dp[n][m];
    }
};