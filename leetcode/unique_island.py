class Solution:
    def numDistinctIslands(self, grid: List[List[int]]) -> int:
        
        def dfs(start,shape,i,j):
            if i>=0 and j>=0 and i<len(grid) and j<len(grid[0]) and grid[i][j]==1:
                shape.append((i-start[0],j-start[1]))
                grid[i][j]=0
                dfs(start,shape,i+1,j)
                dfs(start,shape,i-1,j)
                dfs(start,shape,i,j+1)
                dfs(start,shape,i,j-1)
            return shape
        
        
        
        unique = set()
        count=0
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if grid[i][j]==1:
                    temp = tuple(dfs((i,j),[],i,j))
                    if temp not in unique:
                        unique.add(temp)
                        count+=1
        return count
                    
        