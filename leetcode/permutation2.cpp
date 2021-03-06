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