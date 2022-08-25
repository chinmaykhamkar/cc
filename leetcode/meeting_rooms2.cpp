class Solution {
public:
    int minMeetingRooms(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int count=0;        
        priority_queue<int,vector<int>,greater<int>> q;
        
        for(auto ele:intervals){
            if(!q.empty() && q.top() <= ele[0]){
                q.pop();
            }
            q.push(ele[1]);
        }
        
        
        
        
        
        return q.size();
    }
};