class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = nums[0];
        int count = 1;
        int i;
        
        for(i=1;i<nums.size();i++){
            if(nums[i] == candidate){
                count++;
            }
            else{
                count--;
                if(count == 0){
                    candidate = nums[i];
                    count++;
                }
            }
        }
        
        return candidate;
    }
};