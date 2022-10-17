
from collections import deque
def solve(grid):
    
    q = deque()
    
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j]=='*':
                q.append((i,j))
                break
    # print(q)
    if grid[q[0][0]][q[0][1]] == '#':
        return 0
    dir = [[0,1],[0,-1],[1,0],[-1,0]]
    steps=0
    while q:
        for i in range(len(q)):
            x,y = q.popleft()
            print(x,y,"##########")
            grid[x][y] = 'X'
            for i,j in dir:
                xx = x+i
                yy = y+j
                if xx>=0 and yy>=0 and xx<len(grid) and yy<len(grid[0]) and grid[xx][yy]=='#':
                    return steps+1                
                if xx>=0 and yy>=0 and xx<len(grid) and yy<len(grid[0]) and grid[xx][yy]=='O':
                    grid[xx][yy]='X'
                    q.append((xx,yy))
            print(q)
        steps+=1
        
        print(steps)

    return -1




grid = [["X","X","X","X","X"],["X","*","X","O","X"],["X","O","X","#","X"],["X","X","X","X","X"]]
# grid = [["X","X","X","X","X","X"],["X","*","O","O","O","X"],["X","O","O","#","O","X"],["X","X","X","X","X","X"]]
# grid = [["X","X","X","X","X","X","X","X"],["X","*","O","X","O","#","O","X"],["X","O","O","X","O","O","X","X"],["X","O","O","O","O","#","O","X"],["X","X","X","X","X","X","X","X"]]
print(solve(grid))