class Solution:
    def wallsAndGates(self, rooms: List[List[int]]) -> None:
        """
        Do not return anything, modify rooms in-place instead.
        """       
       
                
        
        row = len(rooms)
        col = len(rooms[0])
        li = []
        q = deque()
        
        for i in range(row):
            for j in range(col):
                if rooms[i][j] == 0:
                    q.append([i,j])
                  
        
        dir = [[0,1],[1,0],[0,-1],[-1,0]]
            
        while q:
            k = len(q)
            node = q.popleft()
            for dx,dy in dir:
                sr,sc = dx+node[0],dy+node[1]
                if sr<0 or sc<0 or sr==len(rooms) or sc==len(rooms[0]) or rooms[sr][sc] == -1 or rooms[sr][sc]!=2147483647:
                    continue
                else:
                    q.append([sr,sc])

                    rooms[sr][sc] = min(rooms[sr][sc],rooms[sr-dx][sc-dy]+1)
      
            
         