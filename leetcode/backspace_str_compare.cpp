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

//method 2
 int i;
        int x=0;
        for(i=0;i<s.size();i++){
            if(s[i] == '#'){
                x--;
                x=max(x,0);
            }
            else{
                s[x]=s[i];
                x++;
            }
        }
        int y=0;
        for(i=0;i<t.size();i++){
            if(t[i] == '#'){
                y--;
                y=max(y,0);
            }
            else{
                s[y]=s[i];
                y++;
            }
        }
        if(x!=y) return false;
        for(i=0;i<x;i++){
            if(s[x]!=t[x]) return false;
        }
        
        return true;