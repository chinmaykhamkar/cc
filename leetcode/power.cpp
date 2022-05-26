class Solution {
public:
    double myPow(double x, int n) {
        
        int temp = n;
        if(temp<0){
            temp = abs(temp);
        }
        
        double ans = helper(x,temp);
        if(n<0){
            return (double)(1.0)/ans;
        }
        
        return ans;
        
    }
    
    double helper(double x, int n){
        if(n==0) return 1;
        
        else if(n%2 == 0) return helper(x*x,n/2);
        else return x*helper(x*x,n/2);
    }
};