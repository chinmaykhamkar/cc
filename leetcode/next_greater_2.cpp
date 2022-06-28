class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans;
        vector<int> op;
        stack<int> st;
        int i,n=nums.size();
        vector<int> temp;
        for(i=0;i<n;i++){
            temp.push_back(nums[i]);
        }
        for(i=0;i<n;i++){
            temp.push_back(nums[i]);
        }
        
        // 
        //nums = [1,2,1]
        //temp = [1,2,1,1,2,1]
        int m = temp.size();
        for(i=m-1;i>=0;i--){
            while(!st.empty() && temp[i]>=st.top()){
                st.pop();
            }
            if(st.empty()){
                ans.push_back(-1);
                st.push(temp[i]);
            }
            else{
                ans.push_back(st.top());
                st.push(temp[i]);
            }
        }
        
        // for(i=0;i<ans.size();i++){
        //     cout<<ans[i]<<" ";
        // }
        int k = ans.size();
        for(i=k-1;i>=k/2;i--){
            op.push_back(ans[i]);
        }
        
        return op;
    }
};