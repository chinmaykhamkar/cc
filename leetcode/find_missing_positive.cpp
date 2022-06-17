class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int i,n=nums.size();
        for(i=0;i<n;i++){
            if(nums[i]<0){
                nums[i] = 0;
            }
        }
        
        for(i=0;i<n;i++){
            int val = abs(nums[i]);
            cout<<val;
            if(val<=n && val>0){
                
                if(nums[val-1]>0){
                    nums[val-1] *=-1;
                }
                else if(nums[val-1] == 0){
                    nums[val - 1] = -1*(n+1);
                }
            }
        }
        for(auto ele:nums){
            cout<<ele<<" ";
        }
        for(i=1;i<n+1;i++){
            if(nums[i-1] >= 0){
                return i;
            }
        }
        
        return n+1;
        
        
        
    }
};