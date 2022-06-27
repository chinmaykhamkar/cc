class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        int n = s1.size();
        int m = s2.size();
        int i;
        vector<int> hash1(26,0);
        vector<int> hash2(26,0);
        if(n>m) return false;
        for(i=0;i<n;i++){
            hash1[s1[i]-'a'] +=1;
            hash2[s2[i]-'a'] +=1;
        }
        int l=0,r=n-1;
        while(r<m){
            if(hash1 == hash2) return true;
            
            r++;
            if(r!=m){
                hash2[s2[r]-'a'] +=1;
                hash2[s2[l]-'a'] -=1;
                l++;
            }
            
            
        }
        
        return false;
        
        
        
    }
};