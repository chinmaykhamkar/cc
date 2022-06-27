class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        int i;
        for(i=0;i<nums.size();i++){
            if(map.find(nums[i]) != map.end()){
                if(abs(map[nums[i]]-i)<=k) return true;
            }
            map[nums[i]] = i;
        }
        
        return false;
    }
};