class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        int n=t.size();
        int i;
        stack<pair<int,int>> st;
        vector<int> ans(n,0);
        st.push(make_pair(t[n-1],n-1));
        
        for(i=n-2;i>=0;i--){
            while(!st.empty() && t[i]>=st.top().first){
                st.pop();
            }
            if(st.empty()){
                st.push(make_pair(t[i],i));
            }
            else{
                ans[i] = st.top().second - i;
                st.push(make_pair(t[i],i));
                
            }
        }
        
        
        return ans;
    }
};