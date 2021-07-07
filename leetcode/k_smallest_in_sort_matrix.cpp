class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> v;
        int output,i,j;
        for(i=0;i<matrix.size();i++){
            for(j=0;j<matrix[i].size();j++){
                v.push_back(matrix[i][j]);
            }
        }
        
        sort(v.begin(),v.end());
        
        return v[k-1];  
        
        
            
        
    }
};