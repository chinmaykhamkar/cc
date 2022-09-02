class Solution:
    def orangesRotting(self, grid: List[List[int]]) -> int:
        time,fresh = 0,0
        q = deque()
        rows = len(grid)
        cols = len(grid[0])
        for i in range(rows):
            for j in range(cols):
                if grid[i][j] == 1:
                    fresh+=1
                if(grid[i][j] == 2):
                    q.append([i,j])
        directions = [[1,0],[0,1],[-1,0],[0,-1]]
        
        while q and fresh>0:
            
            for i in range(len(q)):
                r,c = q.popleft()

                for x,y in directions:
                    dx = r+x
                    dy = c+y

                    if dx<0 or dy<0 or dx==rows or dy==cols or grid[dx][dy]!=1:
                        continue
                    else:
                        grid[dx][dy] = 2
                        q.append([dx,dy])
                        fresh-=1
            time+=1
        
        return time if fresh == 0 else -1
                
                
        
        
        