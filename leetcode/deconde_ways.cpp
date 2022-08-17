class Solution {
public:
    int numDecodings(string s) {
        int i,n=s.size();
        vector<int> dp(n+1);
        dp[0] = 1;
        dp[1] = s[0] == '0'?0:1;
        //0123
        //2101
       //01
        for(i=2;i<=n;i++){
            int one = s[i-1]-'0'; 
            int two = (s[i-2]-'0')*10+one;
            cout<<i<<":"<<one<<":"<<two<<endl;
            if(one>=1){
              dp[i]+=dp[i-1];  
            } 
            if(10<=two && two<=26){
              dp[i]+=dp[i-2];  
            } 
        }
        cout<<endl;
        for(auto ele:dp){
            cout<<ele<<" ";
        }
        
        return dp[n];
    }
};