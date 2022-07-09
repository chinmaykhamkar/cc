#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;
  
class Solution{
     public:
     string check(string ans){
        stack<char> st;
        string final;
        st.push('s');
        int i,n=ans.size();
        for(i=0;i<n;i++){
            if(ans[i]=='['||ans[i]==']'||ans[i]=='('||ans[i]==')'||ans[i]=='{'||ans[i]=='}'){
                char temp = st.top();
                st.push(ans[i]);

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
        }

        if(st.top() == 's') final = "valid";
        else final = "invalid";

        return final;
     }
};

// Driver Code
int main()
{
//
string line;
string ans;
while(getline(cin,line)){
        if(line.empty()){
            break;
        }
        ans+=line;
}

Solution ob;
string f;
f=ob.check(ans);

cout<<f;

   
return 0;
}
// steps to run c++ code
// 1.  g++ -o <name-you-want-to-give> test.cpp
//2. ./myprogram