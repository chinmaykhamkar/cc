class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        int i,n=nums.size();
        for(i=0;i<n;i++){
            if(nums[abs(nums[i])-1] > 0){
                nums[abs(nums[i])-1]*=-1;
            }
        }
        
        for(i=0;i<n;i++){
            if(nums[i]>0){
                ans.push_back(i+1);
            }
        }
        
        return ans;
    }
};


// cycle sort method 

        int i=0,n=nums.size();
        vector<int> ans;
        while(i<n){
            int idx = nums[i]-1;
            if(nums[i]!=nums[idx]){
                swap(nums[i],nums[idx]);
            }
            else{
                i++;
            }
        }
        
        for(i=0;i<n;i++){
            cout<<nums[i]<<" ";
            if(nums[i]!=i+1){
                ans.push_back(i+1);
            }
        }
        
        
        return ans;