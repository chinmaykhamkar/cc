class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        stack<char> s1;
        stack<char> s2;
        
        int n=s.size();
        int m = t.size();
        int i;
        for(i=0;i<n;i++){
            if(s[i] == '#' && !s1.empty()) s1.pop();
            else if(s[i] == '#' && s1.empty()){
                continue;
            }
            else{
                s1.push(s[i]);
            }
            
        }
        
        for(i=0;i<m;i++){
            if(t[i] == '#' && !s2.empty()) s2.pop();
            else if(t[i] == '#' && s2.empty()){
                continue;
            }
            else{
                s2.push(t[i]);
            }
            
        }
        
        // cout<<s2;
        
        if(s1 == s2) return true;
        return false;
    }
    
    
    
    
    
};