class Solution:
    def gameOfLife(self, board: List[List[int]]) -> None:
        """
        Do not return anything, modify board in-place instead.
        """
        dir = [[1,0],[-1,0],[0,1],[0,-1],[1,1],[1,-1],[-1,1],[-1,-1]]
        
        for i in range(len(board)):
            for j in range(len(board[0])):
                live = 0
                for x,y in dir:
                    xx = x+i
                    yy = y+j
                    if xx>=0 and yy>=0 and xx<len(board) and yy<len(board[0]) and abs(board[xx][yy])==1:
                        live+=1
                if board[i][j]==1:
                    if live<2 or live>3:
                        board[i][j]=-1
                else:
                    if live==3:
                        board[i][j] = 2
        for i in range(len(board)):
            for j in range(len(board[0])):
                if board[i][j]==-1:
                    board[i][j]=0
                elif board[i][j]==2:
                    board[i][j] =1
                
        