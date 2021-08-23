class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int i,j,temp;
        int satisfied=0,maxunsatisfied=INT_MIN;
        int itr = customers.size()-minutes+1;
        for(i=0;i<customers.size();i++){
            if(grumpy[i] == 0){
                satisfied+=customers[i];
                customers[i]=0;
            }
        }
        
        for(i=0;i<itr;i++){
            temp=0;
            for(j=i;j<minutes+i;j++){
                temp+=customers[j];
            }
            maxunsatisfied=max(maxunsatisfied,temp);
        }
        
        
        
        return satisfied+maxunsatisfied;
    }
    
    
};