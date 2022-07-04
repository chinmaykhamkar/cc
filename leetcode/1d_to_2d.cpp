class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        
        int i,j,s=original.size();
        vector<int> store;
        vector<vector<int>> ans( m , vector<int> (n, 0));
        if(s==m*n){
            
            for(i=0;i<s;i++){              
                    // cout<<i<<endl;
                    ans[i/n][i%n] = original[i];
                
                
            }
            
            
            return ans;
            
        }
        return {};
    }
};