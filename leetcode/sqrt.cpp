class Solution {
public:
    int mySqrt(int x) {
        long long int i;
        if(x==0){
            return 0;
        }
        for(i=1;i<=x;i++){
            if(i*i == x){
                return i;
            }
            else if(x>i*i && x<(i+1)*(i+1)){
                return i;
            }
        }
        
        return i;
    }
};