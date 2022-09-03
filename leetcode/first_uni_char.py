class Solution:
    def firstUniqChar(self, s: str) -> int:
        mp = {}
        idx = {}
        for i in range(len(s)):
            mp[s[i]] = mp.get(s[i],0)+1
            idx[s[i]] = i 
        print(mp)
        print(idx)
        
        for k,v in mp.items():
            if v == 1:
                return idx[k]
                
        
        
        return -1