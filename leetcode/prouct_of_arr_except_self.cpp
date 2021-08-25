class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> op;
        int i,j;
        int temp=1,temp2=1,c=0;
        for(i=0;i<nums.size();i++){
            temp=nums[i]*temp;
            if(nums[i] == 0) c++;
            if(nums[i]!=0) temp2=temp2*nums[i];
        }
        if(c>1){
            op.assign(nums.size(),0);
            return op;
        }
        else if(c==1){
            for(i=0;i<nums.size();i++){
                if(nums[i] != 0) op.push_back(0);
                else op.push_back(temp2);
            }
        }
        else{
            for(i=0;i<nums.size();i++){
                op.push_back(temp/nums[i]);
            }
        }
        
        

        
        return op;
    }
};