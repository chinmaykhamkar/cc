class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int ans = 0;
        int prod = 1;
        int left=0,right=0,n=nums.size();
        
        while(right<n){
            prod*=nums[right];
            while(prod>=k){
                prod/=nums[left];
                left++;
            }
            ans+=right-left+1;
            right++;
        }
        
        return ans;
        
    }
};