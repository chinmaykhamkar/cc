class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i,output;
        if(nums.size() == 1){
            output = nums[0];
        }
        else{
            for(i=0;i<nums.size();i+=2){
            if(nums[i] != nums[i+1]){
                output=nums[i];
                break;
            }
        }
        }
        
        
        return output;
        
        
    }
};