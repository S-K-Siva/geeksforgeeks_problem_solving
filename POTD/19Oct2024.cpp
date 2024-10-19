class Solution {
  public:
    string roundToNearest(string str) {
        int n = str.size();
        char lastDigit = str[n-1];
        string allDone = "";
        if(lastDigit == '0') return str;
        else if(lastDigit <= '5'){
            str[n-1] = '0';
            return str;
        }
        else{
            int index = n-1;
            int toAdd = 10 - (lastDigit - '0');
            while(index >= 0){
                char currentChar = str[index];
                int val = currentChar - '0';
                int rem = (val + toAdd) % 10;
                
                if(rem == 0){
                    str[index] = '0';
                    toAdd = (val + toAdd)/10;
                }
                else{
                    toAdd = 0;
                    str[index] = rem + '0';
                    break;
                }
                --index;
            }
         
            if(toAdd != 0){
                allDone += toAdd + '0';
                allDone += str;
            }else{
                allDone = str;
            }
            
        }
        
        return allDone;
    }
};
