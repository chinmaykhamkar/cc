class Solution {
public:
    int rob(vector<int>& nums) {
        int i;
        int n=nums.size();
        vector<int> dp1(n); // 0 -> n-1
        vector<int> dp2(n); // 1 -> n
        
        if(n==1) return nums[0];
        if(n==2) return max(nums[0],nums[1]);
        
        dp1[0] = nums[0];
        dp1[1] = nums[0];
        dp2[0] = 0;
        dp2[1] = nums[1];
        for(i=2;i<n;i++){
            dp1[i] = max(dp1[i-2]+nums[i],dp1[i-1]);
            dp2[i] = max(dp2[i-2]+nums[i],dp2[i-1]);
        }
        
        
        return max(dp1[n-2],dp2[n-1]);
    }
    
    //[2,3,2]
    // [2,2]
    //[3,3]
    
};