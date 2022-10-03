class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxf=0;
        int ans=0;
        unordered_map<char,int> mp;
        int l=0,r=0;
        while(r<s.size()){
            mp[s[r]]++;
            maxf = max(maxf,mp[s[r]]);
            if((r-l+1)-maxf>k){
                mp[s[l]]--;
                l++;
            }
            ans=max(ans,r-l+1);
            r++;
        }
        
        return ans;
    }
};