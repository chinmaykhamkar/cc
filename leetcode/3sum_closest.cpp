class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int diff=INT_MAX,temp,ans;

        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                    temp = nums[i]+nums[j]+nums[k];
                     if(abs(target-temp) == 0 ){
                        return temp;
                    }
                    if(diff>abs(target-temp)){
                        ans = temp;
                        diff = abs(target-temp);
                    }
                }
            }
        }
        
        return ans;
        
        
    }
};