class Solution {
public:
    int numTimesAllBlue(vector<int>& light) {
        int count=0,bulbon=0,rightblub=0;
        for(int i=0;i<light.size();i++){
            rightblub=max(rightblub,light[i]);
            if(rightblub == ++bulbon) count++;
        }  
             
        
        return count;
    }
    
    
};