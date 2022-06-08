class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        //{15,-2,2,-8,1,7,10,23}
        unordered_map<int,int> mp;
        int i;
        int maxi = 0;
        int sum = 0;
        for(i=0;i<n;i++){
            sum+=A[i];
            if(sum == 0){
                maxi = i+1;
            }
            else{
                if(mp.find(sum) != mp.end()){
                    maxi = max(maxi,i-mp[sum]); 
                }
                
                else{
                    mp[sum] = i;
                }
            }
        
        }
        
        return maxi;
    }
};
