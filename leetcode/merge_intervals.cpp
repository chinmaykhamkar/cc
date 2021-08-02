class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> op;
      
        sort(intervals.begin(),intervals.end());
        int i;
     
        
        if(intervals.size() == 1){
            op.push_back(intervals[0]);
            return op;
        }
        
        op.push_back(intervals[0]);
        int j=0;
        for(i=1;i<intervals.size();i++){
            if(op[j][1] >= intervals[i][0]){
                op[j][1] = max(op[j][1],intervals[i][1]);
            }
            else{
                op.push_back(intervals[i]);
                j++;
            }
        }
        
        
        return op;
    }
};