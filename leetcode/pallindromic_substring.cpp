class Solution {
public:
    int countSubstrings(string s) {
        int i,j,n=s.size();
        vector<vector<int>> dp(n,vector<int>(n));
        int count=0;
        
        for(i=0;i<n;i++){
            dp[i][i] = 1;
            count+=dp[i][i];
            for(j=0;j<i;j++){
                if((s[i]==s[j]) &&(i-j<=2 || dp[j+1][i-1]==1)){
                    dp[j][i] = 1;
                    count+=dp[j][i];
                }
                
            }
            
        }
        

        
        return count;
        
    }
};