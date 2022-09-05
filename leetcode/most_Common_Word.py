class Solution:
    def mostCommonWord(self, paragraph: str, banned: List[str]) -> str:
        mp = {}
        punc = '''!?',;.'''
        
        for ele in paragraph:
            if ele in punc:
                paragraph = paragraph.replace(ele," ")
        
        paragraph = paragraph.lower()
        # print(paragraph)
        new = paragraph.split(" ")
        # print(new)
        
        
        ans = ""
        mx = 0
        for ele in new:
            if ele not in banned and ele:
                mp[ele] = mp.get(ele,0)+1
                if mp[ele]>mx:
                    ans = ele
                    mx = mp[ele]
                    
            
        print(mp)
        
        
        
        return ans