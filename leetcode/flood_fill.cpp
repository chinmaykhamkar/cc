class Solution:
    def floodFill(self, image: List[List[int]], sr: int, sc: int, color: int) -> List[List[int]]:
        n = len(image)
        m = len(image[0])   
        store = image[sr][sc]
        
        def dfs(r,c):
            nonlocal n, m, image, store
            
            if r<0 or c<0 or r>n-1 or c>m-1 or image[r][c]==color or image[r][c]!=store:
                return 
            image[r][c] = color
            dfs(r-1,c)
            dfs(r+1,c)
            dfs(r,c-1)
            dfs(r,c+1)
        
       
        
        dfs(sr,sc)
        print(image)
        return image
        
        
        
            