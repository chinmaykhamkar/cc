class Solution {
public:
    int myAtoi(string s) {
        
        int n=s.size();
        int i=0;
        while(i<n){
            if(s[i] == ' ') i++;
            else break;
        }
        
        bool neg = false; // false -> -ve, true -> +ve
        if(s[i] == '-'){
            neg=true;
            i++;
        }
        else if(s[i]=='+'){
            i++;
        }
        // cout<<neg;
        string ans = "";
        
        while(i<n){
            if(s[i]!='0') break;
            else i++;
        }
        // cout<<s[i]-'0';
        if(s[i]-'0'>9 || s[i]-'0'<0){
            // cout<<s[i];
            return 0;
        }
        while(i<n){
            
            if(s[i]<='9' && s[i]>='0'){            
                ans+=s[i];
                
            }
            else break;
            i++;
        }
        
        // cout<<ans.size();
        
        int res;
        long temp;
        if(ans.size()<10){
            res = stoi(ans);
        }
        
        if(ans.size()>10){
            if(neg) return INT_MIN;
            return INT_MAX;
        }
        if(ans.size()==10){
            temp = stol(ans);
            cout<<temp;
            if(neg){
                if(temp*-1<INT_MIN) return INT_MIN;
                else return temp*-1;
            }
            else{
                if(temp>INT_MAX) return INT_MAX;
                else return temp;
            }
            
            
        }
        
        if(neg){
            res=res*-1;
        }
        
        return res;
        
        
        
    }
    
};