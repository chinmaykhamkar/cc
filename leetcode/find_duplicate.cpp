class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int size = nums.size();
        int op=1;
        vector<int> arr(size,0);
        int i;
        
        for(i=0;i<nums.size();i++){
            arr[nums[i]] = arr[nums[i]]+1; 
            if(arr[nums[i]] > 1){
                op = nums[i];
                break;
            }
        }
        
                
        return op; 
    }
};

// method 2 - binary search
        int low = 1;
        int high = nums.size()-1;
        int mid,count;
        
        while(low<=high){
            mid = low + (high-low)/2;
            count = 0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]<=mid){
                    count++;
                }
            }
            if(count <= mid){
                low = mid + 1;
            
            } 
            else{
                high = mid - 1 ;
            }
        }
        
        return low;

//method 3 - cyclic sort

int i=0,n=nums.size();
        while(i<n){
            int idx = nums[i]-1;
            if(nums[i]!=nums[idx]){
                swap(nums[i],nums[idx]);
            }
            else{
                i++;
            }
        }
        
        for(i=0;i<n;i++){
            cout<<nums[i]<<" ";
        }
        
        return nums[n-1];
