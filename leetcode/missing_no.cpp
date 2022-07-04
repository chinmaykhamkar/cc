class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int,int> map;
        int i,n=nums.size();
        int ans=-1;
        for(i=0;i<n;i++){
            map[nums[i]] = 1;
        }
        for(i=0;i<n;i++){
            if(map.find(i) == map.end()){
                ans = i;
                break;
            }
        }
        if(ans == -1) return n;
        
        return ans;
    }
};