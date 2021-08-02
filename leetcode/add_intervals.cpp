class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> op;
        int i,j=0;
        if(intervals.size()==0){
            op.push_back(newInterval);
            return op;
        }
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        op.push_back(intervals[0]);
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