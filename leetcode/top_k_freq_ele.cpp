class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> map;
        int i,n=nums.size();
        for(i=0;i<n;i++){
            map[nums[i]]++;
        }
        typedef pair<int,int> pi;
        priority_queue<pi,vector<pi>,greater<pi>> q;
        
       for(auto ele:map){
           q.push({ele.second,ele.first});
           if(q.size()>k){
               q.pop();
           }
       }
        
        while(!q.empty()){
            ans.push_back(q.top().second);
            q.pop();
        }
        
        return ans;
        
    }
};