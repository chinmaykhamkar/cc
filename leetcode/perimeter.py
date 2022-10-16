
def per(grid):
    print(grid)
    n,m = len(grid),len(grid[0])
    per = 0
    side = 0
    ## find perimeter of each island
    for i in range(n):
        for j in range(m):
            if grid[i][j]==1:
                per+=4
                if i>0 and grid[i-1][j]==1:
                    side+=1
                if j>0 and grid[i][j-1]==1:
                    side+=1
                if i<n-1 and grid[i+1][j]==1:
                    side+=1
                if j<m-1 and grid[i][j+1]==1:
                    side+=1
                    
    print(per-side)
    return per-side
                    
                
    
        
    

    
       



grid = [[0,1,0,0],[1,1,1,0],[0,1,0,0],[1,1,0,0]]
per(grid)