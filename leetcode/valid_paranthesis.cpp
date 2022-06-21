class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        st.push('s');
        int i,n=s.size();
        for(i=0;i<n;i++){
            char temp = st.top();
            st.push(s[i]);
            
            if(temp == '[' && st.top() == ']'){
                st.pop();
                st.pop();
            }
            if(temp == '{' && st.top() == '}'){
                st.pop();
                st.pop();
            }
            if(temp == '(' && st.top() == ')'){
                st.pop();
                st.pop();
            }
            
           
        }
        
        if(st.top() == 's') return true;
        return false;
    }
};