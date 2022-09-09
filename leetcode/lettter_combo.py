class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        mp = {
            "2":"abc",
            "3":"def",
            "4":"ghi",
            "5":"jkl",
            "6":"mno",
            "7":"pqrs",
            "8":"tvu",
            "9":"wxyz",           
            
        }
        
        store = []
        def helper(i,s):
            if i == len(digits):
                store.append(s)
                return
            for c in mp[digits[i]]:
                helper(i+1,s+c)
        
        if digits:
            helper(0,"")
        
        return store