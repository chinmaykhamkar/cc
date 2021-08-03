class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>> temp;
        int i,j,flag=0,p,k;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){                
                if(matrix[i][j] == 0){
                    temp.push_back({i,j});           
                }
            }
        }
        
    for(i=0;i<temp.size();i++){
      for(p=0;p<m;p++){
          if(matrix[temp[i][0]][p]!=0) matrix[temp[i][0]][p]=0;
       }
        
       for(k=0;k<n;k++){
           if( matrix[k][temp[i][1]]!=0) matrix[k][temp[i][1]]=0;
       }   
    }
      
        
        
    }
};