class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> store;
        
        helper(0,s,ans,store);
        return ans;
    }
    
    void helper(int ind,string s,vector<vector<string>>& ans,vector<string>& store){
        if(ind == s.size()){
            ans.push_back(store);
            return;
        }
        
        for(int i=ind;i<s.size();i++){
            if(isPalindrome(ind,i,s)){
                store.push_back(s.substr(ind,i-ind+1));
                helper(i+1,s,ans,store);
                store.pop_back();
            }
        }
    }
    
    bool isPalindrome(int start,int end,string s){
        while(start<=end){
            if(s[start++]!=s[end--]){
                return false;
            }            
        }
        
        return true;
    }
};