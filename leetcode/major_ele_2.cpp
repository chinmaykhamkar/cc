class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int temp = nums.size()/3;
        vector<int> op;
        unordered_map <int,int> m;
        int i;
        for(i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        
        for(auto i:m){
            if(i.second>temp){
                op.push_back(i.first);
            }
        }
        
        return op;
        
    }
};