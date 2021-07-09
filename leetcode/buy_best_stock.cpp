class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int i,j,profit=0;
        int temp = prices[0];
        
        for(i=1;i<prices.size();i++){
            temp = min(prices[i],temp);
            
            profit = max(profit,prices[i]-temp);
        }
        
       
        
        
        
        return profit;
        
        
    }
};