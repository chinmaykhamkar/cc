class Solution {
    
public: 
    void helper(int i,int target, vector<int> &arr,vector<vector<int>> &ans,vector<int> &temp){
        if(i == arr.size()){
            if(target == 0){
                ans.push_back(temp);
            }
            return;
        }
        
        if(arr[i] <= target){
            temp.push_back(arr[i]);
            helper(i,target-arr[i],arr,ans,temp);
            temp.pop_back();
        }
        helper(i+1,target,arr,ans,temp);

    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        helper(0,target,candidates,ans,temp);
        return ans;
    }

};