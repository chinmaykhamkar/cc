class Solution {

public: 
    int onebit(int val){
        int sum=0;
        while(val){
            sum+=val%2;
            val/=2;            
        }
        return sum;
    }
    vector<int> sortByBits(vector<int>& arr) {
        vector<int> ans;
        sort(arr.begin(),arr.end());
        map<int,vector<int>> map;
        
        for(auto x:arr){
            
            // int sum=0;
            // int num = x;
            // while(num){
            //     sum+=num%2;
            //     num/=2;
            // }
            int num = onebit(x);
            map[num].push_back(x);
        }
        
        
        for(auto x:map){
            for(auto y:x.second){
                ans.push_back(y);
            }
        }
        
        return ans;
    }
   
};