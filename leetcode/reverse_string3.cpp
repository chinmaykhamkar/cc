class Solution {
public:
    string reverseWords(string s) {
        vector<string> store;
        string ans;
        int i,n=s.size();
        string temp;
        for(i=0;i<n;i++){
            cout<<s[i]<<" ";
            if(s[i]!=' '){
                temp+=s[i];
            }
            else{
                
                reverse(temp.begin(), temp.end());
                temp+=" ";
                store.push_back(temp);
                temp="";
            }
                
        }
        // temp+=" ";
        reverse(temp.begin(), temp.end());
        store.push_back(temp);
        
        
        for(i=0;i<store.size();i++){
            ans+=store[i];
            // ans+=' ';
        }
        
        return ans;
    }
};