class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = 0;
        int sum = 0;
        if(nums.size() == 1){
            return nums[0];
        }
        for(int i=0;i<nums.size();i++){
            sum = sum + nums[i];
            if(sum<0){                
                sum=0;
            }
            else{
            ans = max(ans,sum);                
            }
        }
        if(ans == 0 && nums.size()>0){
            ans =  *max_element(nums.begin(),nums.end());
        }
        
        return ans;
    }
};