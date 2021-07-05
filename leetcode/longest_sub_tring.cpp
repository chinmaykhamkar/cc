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