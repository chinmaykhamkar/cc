class Solution {
public:
    bool canPermutePalindrome(string s) {
        int count=0;
        unordered_map<char,int> map;
        int i,n=s.size();
        for(i=0;i<n;i++){
            map[s[i]]++;
        }
        
        for(auto ele:map){
            if(ele.second%2 != 0) count++;
        }
        
        if(count>1) return false;
        return true;
        
    }
};