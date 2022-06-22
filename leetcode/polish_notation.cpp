class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int temp1,temp2,temp;
        stack<string> st;
        int i;
        int n = tokens.size();
        for(i=0;i<n;i++){
            st.push(tokens[i]);
            if(st.top() == "+"){
                st.pop();
                temp1 = stoi(st.top());
                st.pop();
                temp2 = stoi(st.top());
                st.pop();
                temp = temp1+temp2;
                st.push(to_string(temp));
            }
            if(st.top() == "*"){
                st.pop();
                temp1 = stoi(st.top());
                st.pop();
                temp2 = stoi(st.top());
                st.pop();
                temp = temp1*temp2;
                st.push(to_string(temp));
            }
            if(st.top() == "-"){
                st.pop();
                temp1 = stoi(st.top());
                st.pop();
                temp2 = stoi(st.top());
                st.pop();
                temp = temp2-temp1;
                st.push(to_string(temp));
            }
            if(st.top() == "/"){
                st.pop();
                temp1 = stoi(st.top());
                st.pop();
                temp2 = stoi(st.top());
                st.pop();
                temp = temp2/temp1;
                st.push(to_string(temp));
            }
            
        }
        
        return stoi(st.top());
    }
};