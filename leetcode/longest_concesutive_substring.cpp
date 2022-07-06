class Solution {
public:
     int longestConsecutive(vector<int>& nums) {
         
       unordered_set<int> s;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
	   int longest = 0;
	   for(int num : s) {
        if(s.count(num - 1)) continue;
		int j = 1;
		while(s.count(num + j)) j++; 
		longest = max(longest, j);
	}
	return longest;
    
    }
//          unordered_set<int> s;
//          for(int i = 0; i< nums.size(); i++){
//              s.insert(nums[i]);
//          }
         
//          int longest = 0;
//          for(int num:s){
//              if(s.count(num-1)) continue;
//              int j = 1;
//              while(s.count(num+1)) j++;             
//              longest = max(longest,j);

//          }
         
//          return longest; 
//     }
};

// better understanding

unordered_map<int,int> map;
         int i,n=nums.size();
         for(i=0;i<n;i++){
             map[nums[i]] = 1;
         }
                 
        for(i=0;i<n;i++){
            if(map.find(nums[i]-1) != map.end()){
                map[nums[i]] = 0;
            }
        }
                 
        int ans=0;
                 
        for(auto ele:map){
            if(map[ele.first] == 1){
                int temp=1;
                int val=ele.first;
                while(map.find(val+1) != map.end()){
                    temp++;
                    val++;                              

                }
            
            ans = max(ans,temp);    
            }
            
        }
         
        return ans;