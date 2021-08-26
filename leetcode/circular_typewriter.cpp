class Solution {
public:
    int minTimeToType(string word) {
         int op;
        int t=0,curr=word.size();
        int i;
        char first,second;
        if(word.size()==1){
            t=(int)word[0]-97;
            t=min((int)word[0]-97, (int)'z'-(int)word[0]+1);
            op=t+curr;
            return op;
        }
        
        for(i=0;i<curr-1;i++){
            first=word[i]<word[i+1]?word[i]:word[i+1];
            second=word[i]>word[i+1]?word[i]:word[i+1];
            t+=getDist(first,second);
            
        }
        
        op=t+curr;
        if(word[0]!='a'){
            op=op+min((int)word[0]-97, (int)'z'-(int)word[0]+1);
        }
        
        return op;
    }
    
    int getDist(char first,char second){
        int ans;
        int f=(int)first;
        int s=(int)second;
        ans = min(s-f, (f-97)+(122-s)+1);
        return ans;
    }
};