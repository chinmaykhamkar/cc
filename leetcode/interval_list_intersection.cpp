class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& l1, vector<vector<int>>& l2) {
        int i=0,j=0;
        vector<vector<int>> ans;
        vector<int> store;
        int f = l1.size();
        int s = l2.size();
        
        while(i<f && j<s){
            if(l1[i][1]>=l2[j][0] && l1[i][0]<=l2[j][1]){
                store.push_back(max(l1[i][0],l2[j][0]));
                store.push_back(min(l1[i][1],l2[j][1]));
                ans.push_back(store);
                store.clear();
            }
            if(l1[i][1]<l2[j][1]){
                i++;
            }
            else{
                j++;
            }
        }
        return ans;
    }
};