class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue < pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>> > q;
        unordered_map<int,int> map;
        int i,n=nums.size();
        vector<int> ans;
        for(i=0;i<n;i++){
            map[nums[i]]++;
        }
        
        for(auto ele:map){
            q.push({ele.second,ele.first});
            if(q.size()>k){
                q.pop();
            }
        }
        
        while(q.size()>0){
            ans.push_back(q.top().second);
            q.pop();
        }
        
       
        
        return ans;
    }
};