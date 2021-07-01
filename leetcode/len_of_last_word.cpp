class Solution {
public:
    int lengthOfLastWord(string s) {
        int counter=0,i=0;
        if(s.size()==0){
            return 0;
        }
        
        for(i=s.size()-1;i>=0;i--){
             if(s[i] == ' '){
                s.pop_back();
            }
           else{
               break;
           }
        }
        
        
        
        for(i=0;i<s.size();i++){
            if(s[i] == ' '){
                counter=0;
            }
            else{
                counter++;
            }
        }
        
        return counter;
    }
};