class Solution {
private:
    vector<vector<int>> result; 
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        helper(nums, 0, (int)nums.size() - 1);
        sort(result.begin(), result.end());
        result.erase(unique(result.begin(), result.end()), result.end());
        return result;
    }
    
    void helper(vector<int> num_arr, int l, int r) {
        if (l == r){
            result.push_back(num_arr);
        } 
        else {  
            for (int i = l; i <= r; i++) {
                swap(num_arr[l], num_arr[i]);

                helper(num_arr, l + 1, r); 

                swap(num_arr[l], num_arr[i]);  
            }  
        }
    }  
    
};

//extra space arroach
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> store;
        int n=nums.size();
        vector<int> map (n,0);
        
        helper(ans,store,nums,map);
        return ans;
    }
    
    void helper(vector<vector<int>>& ans,vector<int>& store,vector<int>& nums,vector<int> &map){
        if(store.size() == nums.size()){
            ans.push_back(store);
            return;
        }
        
        for(int i=0;i<nums.size();i++){
            if(!map[i]){
                map[i] = 1;
                store.push_back(nums[i]);
                helper(ans,store,nums,map);
                map[i] = 0;
                store.pop_back();
            }
        }
    }
};