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

//optimal approach

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int i;
        int n = nums.size();
        vector<int> op;
        vector<int> left(n,0);
        vector<int> right(n,0);
        left[0] = 1;
        right[n-1] = 1;
        for(i=1;i<n;i++){
                left[i] = left[i-1]*nums[i-1];
        }
        for(i=n-2;i>=0;i--){           
            right[i] = right[i+1]*nums[i+1];
        }
        
       
        for(i=0;i<n;i++){
            op.push_back(left[i]*right[i]);
        }
        return op;
    }
};