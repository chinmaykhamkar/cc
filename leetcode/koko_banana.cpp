class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(),piles.end());
        
        while(low<=high){
            int mid = low+(high-low)/2;
            
            if(isPossible(mid,piles,h)) high = mid-1;
            else low = mid+1;
        }
        
        return low;
        
    }
    
    bool isPossible(int mid,vector<int> &piles,int h){
        long int count = 0;
        int i;
        for(i=0;i<piles.size();i++){
            count += piles[i]/mid;
            if(piles[i]%mid != 0) count++;
        }
        if(count<=h) return true;
        return false;
    }
};