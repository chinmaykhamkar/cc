class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums2.size()<nums1.size()) return findMedianSortedArrays(nums2,nums1);
              
        int l1,l2,r1,r2;
        int cut1,cut2;
        int n = nums1.size();
        int m = nums2.size();
        int total = n+m;
        int low = 0;
        int high = n;
        
        while(low<=high){
            cut1 = low+(high-low)/2;
            cut2 = (n+m+1)/2-cut1;
            l1 = cut1==0?INT_MIN:nums1[cut1-1];
            l2 = cut2==0?INT_MIN:nums2[cut2-1];
            r1 = cut1==n?INT_MAX:nums1[cut1];
            r2 = cut2==m?INT_MAX:nums2[cut2];
            
            if(l1<=r2 && l2<=r1){
                if(total%2 == 0){
                    return (max(l1,l2)+min(r1,r2))/2.0;
                }
                else{
                    return max(l1,l2);
                }
                
            }
            if(l1>r2){
                high = cut1-1;
            }
            else{
                low = cut1+1;
            }
        }
        
        return 0.0;
        
        
        
        
    }
};