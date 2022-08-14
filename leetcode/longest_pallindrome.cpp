class Solution {
public:
    int longestPalindrome(string s) {
        int i,n=s.size();
        unordered_map<char,int> map;
        for(i=0;i<n;i++){
            map[s[i]]++;
        }
        int odd = 0,even = 0,ans=0;
        for(auto ele:map){
           ans+=(ele.second/2)*2;   
           if(ele.second%2 != 0){
               odd++;
           }
        }
        if(odd>=1) ans++;
        cout<<odd;  
        
        return ans;
        
        
    }
};