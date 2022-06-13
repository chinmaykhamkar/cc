class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans;
        int i,n = nums.size();
        int left = 0,right = n-1;
        if(n == 1){
            return nums[0];
        }
        if(nums[0]<nums[n-1]){
            return nums[0];
        }
        while(left<=right){
            int mid = left+(right-left)/2;
            
            if(nums[mid] >= nums[0]){
                left = mid+1;
            }
            else{
                right = mid-1;
            }
            ans = min(ans,nums[mid]);
            
        }
        return ans;
    }
};