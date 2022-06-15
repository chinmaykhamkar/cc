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

//optimal approach 
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> ans;
        int low,high;
        int i,n=nums.size();
        
        sort(nums.begin(),nums.end());
        // [-4,-1,-1,0,1,2]
        for(i=0;i<n-2;i++){
            if(i==0 || (i>0 && nums[i] != nums[i-1])){
                low = i+1;
                high = n-1;
                while(low<high){
                    int target = -nums[i];
                    if(nums[low] + nums[high] == target){
                        vector<int> temp = {nums[i],nums[low],nums[high]};
                        ans.push_back(temp);
                        
                        while(low<high && nums[low] == nums[low+1]){
                            low++;
                        }
                        while(low<high && nums[high] == nums[high-1]){
                            high--;
                        }
                        low++;
                        high--;
                                                
                    }
                    else if(nums[low]+nums[high]<target){
                        low++;
                    }
                    else{
                        high--;
                    }
                }
            }
        }
        
        return ans;
        
        
        
//         int i,j,n=nums.size();
//         unordered_map<int,int> map;
//         set<vector<int>>s;     
//         vector<vector<int>>ans;     
//         if(n<3){
//             return {};
//         }
        
//         for(i=0;i<n;i++){
//             map[nums[i]]++;
//         }
//         for(i=0;i<n;i++){
//             map[nums[i]]--;
//             for(j=i+1;j<n;j++){
//                 map[nums[j]]--;
//                 int c = -(nums[i]+nums[j]);
//                 if(map.find(c) != map.end() && map[c]>0){
//                     vector<int> temp = {nums[i],nums[j],c};
//                     sort(temp.begin(),temp.end());
//                     s.insert(temp);

//                 }
//                 map[nums[j]]++;
//             }
//             map[nums[i]]++;
//         }
        
//         ans.assign(s.begin(),s.end());

        
       
     
//         return ans;
    
    }
};