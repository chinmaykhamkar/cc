class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        vector<long int> map(60,0);
        int i,n=time.size();
        long int count=0;
        for(i=0;i<n;i++){
            map[time[i]%60]+=1;
        }
        
        if(map[0]){
            count+=(map[0]*(map[0]-1))/2;
        }
        if(map[30]){
            count+=(map[30]*(map[30]-1))/2;            
        }
        for(i=1;i<=29;i++){
            count+=map[i]*map[60-i];
        }
       
        
        return count;
    }
};