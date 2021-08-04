class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // bool op;
        
        
        
        int left,right,mid;
        int n=matrix.size();
        int m=matrix[0].size();
        int i,x=-1;
        
        if(n==1 && m==1){
            if(target == matrix[0][0]) return true;
            else return false;
        }
        
        for(i=0;i<n;i++){
            if(matrix[i][m-1]>=target){
                x=i;
                break;
            }
        }
        if(x==-1){
            x=n-1;
        }
        
        
        left=0;
        right=m-1;
        while(right>=left){
            mid = left + (right-left)/2;
            if(matrix[x][mid] == target){
                return true;
            }
            if(target>matrix[x][mid]){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        
        
        
        return false;
    }
};