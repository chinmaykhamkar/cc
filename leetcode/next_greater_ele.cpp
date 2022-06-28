class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int,int> map;
        stack<int> st;
        int i;
        int n1 = nums1.size();
        int n2 = nums2.size();
        // map[nums2[n2-1]] = -1;
        // st.push(nums2[n2-1]);
        for(i=n2-1;i>=0;i--){
            
            while(!st.empty()&&nums2[i]>st.top()){
                st.pop();
            }
            if(st.empty()){
                map[nums2[i]] = -1;
                st.push(nums2[i]);
            }
            else{
                map[nums2[i]] = st.top();
                st.push(nums2[i]);
            }
        }
        
        for(i=0;i<n1;i++){
            if(map.find(nums1[i]) != map.end()){
                ans.push_back(map[nums1[i]]);
            }
        }
        
        
        return ans;
    }
};