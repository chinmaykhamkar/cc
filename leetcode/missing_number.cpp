class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int output;
        for(int i=0;i<nums.size();i++){
            if(i != nums[i]){
                output = i;
                break;
            }
        }
        
        return output;
    }
};