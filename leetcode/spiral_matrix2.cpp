class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> op( n , vector<int> (n, 0));
        int i=1,d=1;
        int left=0,right=n-1,bottom=n-1,top=0,k;
        while(left<=right && top<=bottom){
            if(d==1){
               for(k=left;k<=right;k++){
                   op[top][k]=i++;
               }
               d=2;
               top++;
            
            }
            
            if(d==2){
                for(k=top;k<=bottom;k++){
                    op[k][right]=i++;
                }
                d=3;
                right--;
            }
            
            if(d==3){
                for(k=right;k>=left;k--){
                    op[bottom][k]=i++;
                }
                d=4;
                bottom--;
            }
            
            if(d==4){
                for(k=bottom;k>=top;k--){
                    op[k][left]=i++;
                }
                d=1;
                left++;
            }
            
            
        }
        
        
        
        return op;
    }
};