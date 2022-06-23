class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i,j,n=nums.size();
        i=0,j=0;
        while(i<n && j<n){
            if(nums[i] == nums[j]){
                j++;
            }
            else{
                nums[i+1] = nums[j];
                i++;
            }
        }
        
        
        return i+1;
    }
};