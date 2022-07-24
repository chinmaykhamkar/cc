class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int i,n=nums.size();
        vector<int> ans(n);
        int low=0;
        int high=n-1;
        int k=n-1;
        while(low<=high){
            if(abs(nums[low])>abs(nums[high])){
                ans[k] = nums[low]*nums[low];
                k--;
                low++;
            }
            else{
                ans[k] = nums[high]*nums[high];
                k--;
                high--;
            }
            
        }
        
        return ans;
        
    }
};