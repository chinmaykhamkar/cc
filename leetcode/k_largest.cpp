class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        if(k==1) return *max_element(nums.begin(),nums.end());        
        int max,i;
        sort(nums.begin(),nums.end());
        // nums.erase(unique(nums.begin(),nums.end()),nums.end());
        
        for(i=0;i<nums.size();i++){
            if(nums.size()-i == k){
                max = nums[i];
                break;
            }
        }
        
        
        
        return max;
    }
};