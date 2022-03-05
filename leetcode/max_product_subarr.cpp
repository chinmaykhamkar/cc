class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int p = 0,temp;
        if(nums.size() == 1){
            return nums[0];
        }                
        vector<int> dp1(nums.size(),0);
        vector<int> dp2(nums.size(),0);
        dp1[0] = nums[0];
        dp2[0] = nums[0];
        
        for(int i=1;i<nums.size();i++){
            dp1[i] = max(dp1[i-1]*nums[i], max(dp2[i-1]*nums[i],nums[i]));
            dp2[i] = min(dp2[i-1]*nums[i],min(dp1[i-1]*nums[i],nums[i]));
        
        }
        
        return *max_element(dp1.begin(),dp1.end());
        
    }
};