class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        
        int i,n=fruits.size();
        unordered_map<int,int> map;
        int l=0,r=0;
        int ans=0;
        
        while(r<n){  
            map[fruits[r]]++;
            while(map.size()>2){
                if(map[fruits[l]]>1){
                    map[fruits[l]]--;
                }
                else{
                    map.erase(fruits[l]);
                }
                l++;
            }
            
            ans = max(ans,r-l+1);
            r++;
                
            
        }
        
        for(auto ele:map){
            // ans+=ele.second;
            cout<<ele.first<<" "<<ele.second<<endl;
        }
        
        return ans;
    }
};