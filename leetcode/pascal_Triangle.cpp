class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> output;
        vector<int> row;
        for(int i=0;i<numRows;i++){
            for(int j=0;j<=i;j++){
                if(j==0 || j==i){
                    row.push_back(1);
                }
                else{
                    
                        int ele = output[i-1][j-1] + output[i-1][j];
                        row.push_back(ele);
                    
                    
                }
                
            }
            output.push_back(row);
            row.clear();
        }
        
        return output;
    }
};








//         ji
//         00
//     01      11
// 02      12      22
            