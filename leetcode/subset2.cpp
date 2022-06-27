class Solution {
public:
    void helper(int ind,vector<int> &nums,vector<vector<int>> &ans,vector<int> &store){
        
        ans.push_back(store);
        for(int i=ind;i<nums.size();i++){
            if(i>ind && nums[i]==nums[i-1]) continue;
            store.push_back(nums[i]);
            helper(i+1,nums,ans,store);
            store.pop_back();
        }
        
        
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> store;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        helper(0,nums,ans,store);
        return ans;
    }
};