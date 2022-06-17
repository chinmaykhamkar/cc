class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int ans = 0;
        int m = grid.size();
        int n = grid[m].size();
        // cout<<m<<" "<<n;
        int i,j;
        for(i=0;i<grid.size();i++){
            for(j=0;j<grid[i].size();j++){
                if((i == 0) && (j == 0)){
                    grid[i][j] = grid[i][j];
                }
                else if((i == 0) && (j!=0) && (j-1>=0)){
                    grid[i][j] = grid[i][j]+grid[i][j-1];
                }
                else if((j==0) && (i!=0) && (i-1>=0)){
                    grid[i][j] = grid[i][j]+grid[i-1][j];
                }
                else{
                    if((i-1>=0) && (j-1>=0))
                    grid[i][j] = min(grid[i-1][j],grid[i][j-1])+grid[i][j];
                }
            }
        }
        
        cout<<i<<" "<<j;
        return grid[i-1][j-1];
    }
};