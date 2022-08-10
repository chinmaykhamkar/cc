class NumArray {
public:
    vector<int> dp;
public:
    NumArray(vector<int>& nums) {
        int i,n=nums.size();
        dp.clear();
        
        for(int i=0;i<n;i++){
            if(i==0) dp.push_back(nums[i]);
            else{
                dp.push_back(dp[i-1]+nums[i]);
            }
        }
    }
    
    int sumRange(int left, int right) {
        
        if(left == 0) return dp[right];
        
        return dp[right] - dp[left-1];
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */