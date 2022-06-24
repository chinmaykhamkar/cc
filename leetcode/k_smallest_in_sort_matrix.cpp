class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> v;
        int output,i,j;
        for(i=0;i<matrix.size();i++){
            for(j=0;j<matrix[i].size();j++){
                v.push_back(matrix[i][j]);
            }
        }
        
        sort(v.begin(),v.end());
        
        return v[k-1];  
        
        
            
        
    }
};

//better approach

int low = max(0,k-m);
    int high = min(n,k);
    while(low<=high){
        int cut1 = low+(high-low)/2;
        int cut2 = k-cut1;
        int l1 = cut1==0?INT_MIN:arr1[cut1-1];
        int l2 = cut2==0?INT_MIN:arr2[cut2-1];
        int r1 = cut1==n?INT_MAX:arr1[cut1];
        int r2 = cut2==m?INT_MAX:arr2[cut2];
        
        if(l1<=r2 && l2<=r1){
            return max(l1,l2);
        }
        else if(l1>r2){
            high = cut1-1;
        }
        else{
            low = cut1+1;
        }
    }