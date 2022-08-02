class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        if(k==1) return *max_element(nums.begin(),nums.end());        
        int max,i,n=nums.size();
        sort(nums.begin(),nums.end());
        // nums.erase(unique(nums.begin(),nums.end()),nums.end());
        
        
        
        
        
        return nums[n-k];
    }
};

// queue approach
 priority_queue<int,vector<int>,greater<int>> q;
        int i;
        for(i=0;i<k;i++){
            q.push(nums[i]);
        }
        
        for(i=k;i<nums.size();i++){
            if(q.top()<nums[i]){
                q.pop();
                q.push(nums[i]);
            }
        }
        
        return q.top();