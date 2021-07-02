class Solution {
public:
    string addBinary(string a, string b) {
        string output;
        
        string carry = "0";
        int i,diff;
        if(a.size()>b.size()){
            diff=a.size()-b.size();
            for(i=0;i<diff;i++){
                b.insert(0,"0");
            }
            
        }
        if(b.size()>a.size()){
            diff=b.size()-a.size();
            for(i=0;i<diff;i++){
                a.insert(0,"0");
            }
            
        }
        for(i=a.size()-1;i>=0;i--){
            if(a[i] == '0' && b[i] == '0'){
                if(carry == "1"){
                    output.push_back('1');
                    carry = "0";
                }
                else{
                    output.push_back('0');
                }
                
            }
            if(a[i] == '1' && b[i] == '0'){
                if(carry == "1"){
                    output.push_back('0');
                    carry = "1";
                }
                else{
                    output.push_back('1');
                }
                
            }
            if(a[i] == '0' && b[i] == '1'){
                if(carry == "1"){
                    output.push_back('0');
                    carry = "1";
                }
                else{
                    output.push_back('1');
                }
            }
            if(a[i] == '1' && b[i] == '1'){
                
                if(carry == "1"){
                    output.push_back('1');
                    carry = "1";
                }
                else{
                    output.push_back('0');
                    carry = "1";
                }
                
            }  
        }
        if(carry == "1"){
            output.push_back('1');
        }
        reverse(output.begin(),output.end());
        
        return output;
    }
};