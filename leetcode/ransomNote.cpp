class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        sort(ransomNote.begin(),ransomNote.end());
        sort(magazine.begin(),magazine.end());
        
        int i=0,j;
        for(j=0;j<magazine.size();j++){
            if(ransomNote[i] == magazine[j]){
                i++;
            }
            if(i==ransomNote.size()){
                return true;
            }
        }
                
        
        return false;
    }
};


/*
       i      
r = abcz

       j
m = abcdefgh


*/