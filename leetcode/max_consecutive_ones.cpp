class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0;
        int i,j,n=nums.size();
        i=0;
        j=0;
        while(i<n && j<n){
            if(nums[i] == 1 && nums[j] == 1){
                ans = max(ans,j-i+1);
                j++;
            }
            else{
                j++;
                i=j;
            }
        }
        
        return ans;
    }
};