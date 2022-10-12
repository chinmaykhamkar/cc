class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        unordered_map<char,int> mp;
        int i,j;
        //case when both the strings are equal
        if(s==goal){
            for(i=0;i<s.size();i++){
                mp[s[i]]++;
            }
            for(auto ele:mp){
                if(ele.second>1){
                    return true;
                }
            }
            return false;
        }
        int pos1=-1;
        int pos2=-1;
        int count=0;
        for(i=0;i<s.size();i++){
            if(s[i]!=goal[i]){
                if(pos1==-1){
                    pos1=i;
                }
                else{
                    pos2=i;
                }
                count++;
            }
            
           
            
        }
        
        if(count==2){
            swap(s[pos1],s[pos2]);
            if(s==goal) return true;
            else return false;
        }
        
        return false;
        
    }
};