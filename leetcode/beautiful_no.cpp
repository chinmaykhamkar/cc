class Solution {
public:
    bool isHappy(int n) {
        set<int> s;
        int val,temp;
        
        while(1){
            val = 0;
            while(n){
                temp=n%10;
                val = val + temp*temp;
                n=n/10;
            }
            if(val == 1){
                return true;
            }
            else if(s.find(val)!=s.end()){
                return false;
            }
            
            s.insert(val);            
            n = val;
        }
        
        
    }
};