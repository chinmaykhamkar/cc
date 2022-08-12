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