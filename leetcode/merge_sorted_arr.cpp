class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> output;
        int i,c=nums1.size()-m;
        if(m==0){
            nums1 = nums2;
        }
        else{
            for(i=0;i<c;i++){
                nums1.pop_back();
            }
            for(i=0;i<nums2.size();i++){
                nums1.push_back(nums2[i]);
            }
            sort(nums1.begin(),nums1.end());
            
        }
        
        
        
    }
};