class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i,c=1,j=0; 
        vector<int> count;
        string sub;        
        if(s==""){
            return 0;
        }
        sub=s[j];
        
        for(i=1;i<s.size();i++){
            if(sub.find(s[i]) == std::string::npos){
                sub=sub+s[i];
                c++;
                count.push_back(c);                
            }
            else{
                sub.erase();
                j++;
                sub=s[j];
                i=j;
                c=1;
            }
        }
        count.push_back(1);
        return *max_element(count.begin(),count.end());
    }
};

// optimal sol
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        int left = 0,right = 0;
        vector<int> store(256,-1);
        int n = s.size();
        while(right<n){
            
            if(store[s[right]] != -1){
                left = max(store[s[right]]+1,left);
            }
            
            store[s[right]] = right;
            ans = max(ans,right-left+1);
            right++;
        }
        
        return ans;
        
//         int ans=0;
//         int left=0,right;
//         unordered_set<int> set;
//         int n = s.size();
//         for(right=0;right<n;right++){
//             if(set.find(s[right]) != set.end()){
//                 while(left<right && set.find(s[right]) != set.end()){
//                     set.erase(s[left]);
//                     left++;
//                 }
                    
//             }
//             set.insert(s[right]);
//             ans = max(ans,right-left+1);
//         }
        
//         return ans;
    }
};