class Solution {
public:
    
    int eraseOverlapIntervals(vector<vector<int>>& a) {
        int count = 0;
        int n=a.size();
        if(n==1) return 0;
        sort(a.begin(),a.end());
        
        int i=0,j=1;
        while(j<n){
            if(a[i][1]<=a[j][0]){
                i=j;
                j++;                
            }
            else if(a[i][1]<=a[j][1]){
                count++;
                j++;
            }
            else if(a[i][1]>a[j][1]){
                count++;
                i=j;
                j++;
            }
        }
        return count;
    }
};