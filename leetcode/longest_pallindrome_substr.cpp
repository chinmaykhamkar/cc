class Solution {
public:
    string longestPalindrome(string s) {
        
        string ans = "";
        int n = s.size();
        if(n==0) return "";
        if(n==1) return s;
        int start = 0,end = 0, maxx = 1;        
        vector<vector<bool>> dp(n,vector<bool>(n,false));
        int i,j;
        for(i=0;i<n;i++){
            dp[i][i] = true;
            for(j=0;j<i;j++){
                if(s[i] == s[j] && (i-j<2 || dp[j+1][i-1])){
                    dp[j][i] = true;
                    if(i-j+1>maxx){
                        maxx = i-j+1;
                        start = j;
                        end = i;
                    }
                }
            }
        }
        
        ans = s.substr(start,maxx);
        return ans;
        
    }
};