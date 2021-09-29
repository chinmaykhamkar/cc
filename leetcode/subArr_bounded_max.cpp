class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        
        int start = 0;
        int end = 0;
        int window = 0;
        int count = 0;
        while(end<nums.size()){
            if(nums[end]>=left && nums[end]<=right){
                window = end - start + 1;
            }
            else if(nums[end]>right){
                start = end + 1;
                window = 0;
            }
            else if(nums[end]<left){
                window = window;
            }
            count = count + window;
            end++;
        }
        return count;
    }
};