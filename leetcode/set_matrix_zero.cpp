class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int i,j,k;
        int row=matrix.size();
        int col=matrix[0].size();
        vector<int> zeros;
        vector<vector<int>> loc;
        
        for(i=0;i<row;i++){
            for(j=0;j<col;j++){
                if(matrix[i][j] == 0){
                    zeros.push_back(i);
                    zeros.push_back(j);
                    loc.push_back(zeros);
                    zeros.clear();
                }
            }
        }
        
       
        for(i=0;i<loc.size();i++){
            int x = loc[i][0];
            int y = loc[i][1];
            
            for(j=0;j<row;j++){
                if(matrix[j][y] != 0){
                    matrix[j][y] = 0;
                }
            }
            
            for(j=0;j<col;j++){
                if(matrix[x][j] != 0){
                    matrix[x][j] = 0;
                }
            }
        }
        
    }
};