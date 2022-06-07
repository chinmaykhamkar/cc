class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>> op;
        set<vector<int>> val;
        int left,right;
        int i,j,temp,temp2;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                temp = target - nums[i] - nums[j];
                left = j+1;
            right = n-1;
            while(left<right){
                temp2 = nums[left] + nums[right];
                if(temp2>temp){
                    right--;
                }
                else if(temp2 < temp){
                    left++;
                }
                else{
                    val.insert({nums[i],nums[j],nums[left],nums[right]});
                    left++;
                    right--;
                }
            }
            }
            
        }
        
        for(auto i:val){
            op.push_back(i);
        }
        return op;
            
    
    }
};