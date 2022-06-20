class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // unordered_map<int,int> map;
        vector<int> store;
        unordered_map<int,int> map;
        int i,n = nums.size();
        int sum=0,count=0;
        for(i=0;i<n;i++){
            sum+=nums[i];
            store.push_back(sum);
        }
        
        for(i=0;i<store.size();i++){
            if(store[i] == k){
                count++;
            }
            int temp = store[i]-k;
            if(map.find(temp) != map.end()){
                count+=map[temp];
            }
            
            map[store[i]]++;
        }
        
        
        
        
        return count;
//         int i,j,n=nums.size();
//         int sum = 0,count = 0;
//         for(i=0;i<n;i++){
//             sum = 0;
//             for(j=i;j<n;j++){
//                 sum += nums[j];
//                 if(sum == k){
//                     count++;
                 
//                 }
                
                
//             }
//         }
//         return count;
    }
};