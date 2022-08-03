class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        helper(0,0,n,ans,"");
        return ans;
        // if open == close == n
        // if open<n then add (
        // if close<open then add )                    
        
    }
    
    void helper(int open,int close,int n,vector<string>& ans,string str){
        
        if(open == n && close == n){
            ans.push_back(str);
            return;
        }
        
        if(open<n){
            helper(open+1,close,n,ans,str+"(");
        }
        if(close<open){
            helper(open,close+1,n,ans,str+")");
        }
    }
};