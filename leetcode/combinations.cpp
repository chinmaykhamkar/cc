class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> store;
        vector<int> nums;
        for(int i=0;i<n;i++){
            nums.push_back(i+1);
        }
         for(int i=0;i<n;i++){
           cout<<nums[i]<<" ";
        }
        nums = [1,2,3,4]
        
        
        helper(ans,store,nums,n,k,0);    
        return ans;
        
    }
    
    void helper(vector<vector<int>>& ans,vector<int>& store,vector<int>& nums, int n,int k,int idx){
        if(k == store.size()){
            ans.push_back(store);
            return;
        }
        
        for(int i=idx;i<n;i++){
            store.push_back(nums[i]);            
            helper(ans,store,nums,n,k,i+1);
            store.pop_back();
        }
    }
};
