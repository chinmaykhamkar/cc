class Solution {
public:
    bool isAnagram(string s, string t) {
        int i;
        unordered_map<char,int> temp1,temp2;
        if(s.size() != t.size()){
            return false;
        }
        
        for(i=0;i<s.size();i++){
            temp1[s[i]]++;
            temp2[t[i]]++;
        }
        for(auto ele:temp1){
            if(ele.second != temp2[ele.first]){
                return false;
            }
        }
        
        
        return true;
    }
};