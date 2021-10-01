class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
       
        sort(arr,arr+n);
        int mx=0,mi=0,res=0;
        res = arr[n-1]-arr[0];
        int i;
        for(i=1;i<n;i++){
            if(arr[i]-k>=0){
                mx = max(arr[i-1]+k,arr[n-1]-k);
                mi = min(arr[i]-k,arr[0]+k);
                res = min(res,mx-mi);
            }
        }
        
        return res;
    }
};