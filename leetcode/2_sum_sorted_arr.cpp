class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int low,high,n=numbers.size();
        low = 0;
        high = n-1;
        vector<int> ans;
        while(low<=high){
            if(numbers[low]+numbers[high] == target){
                return {low+1,high+1};
            }
            else if(numbers[low]+numbers[high] > target){
                high--;
            }
            else{
                low++;
            }
        }
        return {};
        // vector<int> ans;
        // int i,n=numbers.size();
        // unordered_map<int,int> map;
        // for(i=0;i<n;i++){
        //     if(map.find(target-numbers[i]) != map.end()){
        //         ans.push_back(map[target-numbers[i]]+1);
        //         ans.push_back(i+1);
        //     }
        //     else{
        //         map[numbers[i]] = i;
        //     }
        // }
        // return ans;
    }
};