class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int p,s=0,c=0;
        int row = grid.size();
        int col = grid[0].size();
        int i,j;
        for(i=0;i<row;i++){
            for(j=0;j<col;j++){
                if(grid[i][j] == 1){
                    c++;
                    if(i-1>=0 && grid[i-1][j] == 1){                        
                            s++;                        
                    }
                    if(i+1<row && grid[i+1][j] == 1){                        
                            s++;                        
                    }
                    
                    if(j-1>=0 && grid[i][j-1] == 1){                        
                            s++;                        
                    }
                    
                    if(j+1<col && grid[i][j+1] == 1){                        
                            s++;                        
                    }
                }
            }
        }
        p=c*4;
        p=p-s;
        
        
        
        
        return p;
    }
};