class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i,n=prices.size();
        
        int ans=0;
        for(i=0;i<n-1;i++){
            if(prices[i+1]>prices[i]){
                ans+=prices[i+1]-prices[i];
            }
     
        }
        
        return ans;
    }
    
};