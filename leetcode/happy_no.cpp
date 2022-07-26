class Solution {
public:
    bool isHappy(int n) {
        
        int temp = n;
        while(true){
            
            if(temp==89) return false;
            if(temp==1) return true;
            temp = helper(temp);
        }
        
    }
    
    int helper(int val){
        int sum=0;
        while(val){
            sum+=(val%10)*(val%10);
            val=val/10;
        }
        
        return sum;
    }
};