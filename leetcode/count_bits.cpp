class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> dp(n+1,0);
        int offset = 1;
        if(n==0) return {0};
        for(int i=1;i<=n;i++){
            if(offset*2 == i){
                offset = i;                
            }
            dp[i] = 1 + dp[i-offset];
            
        }
        
        return dp;
    }
};

// m2
      vector<int> ans;
        int i;
        for(i=0;i<=n;i++){
            int sum = 0;
            int num = i;
            while(num){
                sum+=num%2;
                num=num/2;
            }
            ans.push_back(sum);
        }
        
        return ans;
        