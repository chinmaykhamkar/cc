class Solution {
public:
    //red=2, white=2,blue=2
    void sortColors(vector<int>& nums) {
        int red=0,white=0,blue=0,i;
        for(i=0;i<nums.size();i++){
            if(nums[i] == 0){
                red++;
            }
            if(nums[i] == 1){
                white++;
            }
            if(nums[i] == 2){
                blue++;
            }
        }
        
        for(i=0;i<red;i++){
            nums[i] = 0;
        }
        for(i=red;i<red+white;i++){
            nums[i] = 1;
        }
        for(i=red+white;i<red+white+blue;i++){
            nums[i] = 2;
        }
    }
};

//in place solution
class Solution {
public:
    void sortColors(vector<int>& a) {
        int n=a.size();
        int low=0,mid=0,high=n-1;
        
        while(mid<=high){
            if(a[mid] == 0){
                swap(a[low],a[mid]);
                low++;
                mid++;
                
            }
            else if(a[mid] == 1){
                mid++;
            }
            else{
                swap(a[mid],a[high]);
                high--;
            }
        }
        
        
            
            
            
        
        
    }
};