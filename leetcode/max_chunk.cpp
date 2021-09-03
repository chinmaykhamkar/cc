class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int ans=0,sum=0,val=0;
        int i;
        for(i=0;i<arr.size();i++){
            sum+=i;
            val+=arr[i];
            if(sum == val){
                ans++;
            }
        }
        
        return ans;
    }
};