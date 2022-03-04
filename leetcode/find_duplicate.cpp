class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int size = nums.size();
        int op=1;
        vector<int> arr(size,0);
        int i;
        
        for(i=0;i<nums.size();i++){
            arr[nums[i]] = arr[nums[i]]+1; 
            if(arr[nums[i]] > 1){
                op = nums[i];
                break;
            }
        }
        
                
        return op; 
    }
};