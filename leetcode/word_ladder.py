class Solution:
    def ladderLength(self, beginWord: str, endWord: str, wordList: List[str]) -> int:
        if endWord not in wordList:
            return 0
        count = 1
        store = collections.defaultdict(list)
        wordList.append(beginWord)
        for word in wordList:
            for j in range(len(word)):
                temp = word[:j]+"*"+word[j+1:]
                store[temp].append(word)
                
        visited = set([beginWord])
        q = deque([beginWord])
        # q.append([beginWord])
        
        while q:            
            for i in range(len(q)):
                word = q.popleft()
                if word == endWord:
                    return count
                for j in range(len(word)):
                    # print(word[:j]+"*"+word[j+1:])
                    temp = word[:j]+"*"+word[j+1:]
                    for ele in store[temp]:
                        if ele not in visited:
                            visited.add(ele)
                            q.append(ele)
            count+=1
                    
        return 0
        
        