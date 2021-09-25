class Solution {
public:
    bool validPalindrome(string s) {
        
        int l=0,r=s.length()-1;
        while(l<r){
            if(s[l]!=s[r]){
                if(isPal(s,l)) return true;
                if(isPal(s,r)) return true;
                return false;
            }           
                l++;
                r--;
            
        }
        return true;
        
    }
    
    bool isPal(string str, int index){
        string t1,t2;
        
        for(int i=0;i<str.length();i++){
            if(i!=index){
                t1+=str[i];
            }
        }
        
        t2=t1;
        reverse(t1.begin(),t1.end());
        if(t2==t1) return true;
        
        return false;
    }
    
};