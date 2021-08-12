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