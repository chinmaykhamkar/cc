class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> op;
        int m = s.size();
        int n = p.size();
        if(n>m) return {};
        int i;
        vector<int> hash1(26,0);
        vector<int> hash2(26,0);
        for(i=0;i<n;i++){
            hash1[p[i]-'a']+=1;
            hash2[s[i]-'a']+=1;
        }
        int l=0;
        int r=n-1;
        while(r<m){
            if(hash1 == hash2){
                op.push_back(l);
            }
            r++;
            if(r!=m){
                hash2[s[r]-'a']+=1;
                hash2[s[l]-'a']-=1;
                l++;
            }
        }
        
        
        return op;
        
    }
};