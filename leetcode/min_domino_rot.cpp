class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int ct = 0,cb = 0,cc = 0,i;
        map<int,int> m;
        for(i=0;i<tops.size();i++){
            m[tops[i]]++;
            m[bottoms[i]]++;
        }
        int max=0,res=-1;
        
        for(auto i:m){
            if(max<i.second){
                res = i.first;
                max = i.second;
            }
        }
        
        for(i=0;i<tops.size();i++){
            if(tops[i] == res && bottoms[i] == res){
                cc++;                
            }
            if(tops[i] == res){
                ct++;
            }
            if(bottoms[i] == res){
                cb++;
            }
        }
              
        if(ct+cb-cc != tops.size()) return -1;
        
        res = min(cb,ct) - cc;
        return res;
        
      
    }
};